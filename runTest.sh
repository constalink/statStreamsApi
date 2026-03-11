#!/usr/bin/bash

pathToTest=$1
example="sh runTest.sh tests/MyCustomStreamTest.c"
shift

if [ -z "$pathToTest" ]
then
	echo -e "\e[91mFAILED:\e[0m Please specify the path to a test to run"
	echo -e "Example: \e[96m$example\e[0m"
	echo
	exit 1
fi

if [ ! -e "$pathToTest" ]
then
	echo -e "\e[91mFAILED:\e[0m Could not find the test \e[96m$pathToTest\e[0m"
	echo
	exit 1
fi

testName=$(basename "$pathToTest" Test.c)
echo -e "Testing \e[96m$testName\e[0m"

fileUnderTest="$(dirname $(dirname "$pathToTest"))/${testName}.c"
if [ ! -f "$fileUnderTest" ]
then
	echo -e "    \e[91mERROR:\e[0m     Could not find the file under test: \e[96m$fileUnderTest\e[0m"
	echo
	exit 1
fi

# Prepare the build folder
rm -rf ./build
if [ -e build ]
then
	echo -e "    \e[91mERROR:\e[0m     Could not remove the previous test: \e[96mbuild/run\e[0m"
	echo
	exit 1
fi
mkdir build

# Build the test
if ! gcc -g -fprofile-arcs -ftest-coverage -pthread -lm /usr/lib/Stat/streams/api.o "$pathToTest" -o build/run "$@" || [ ! -e build/run ]
then
	echo -e "    \e[91mERROR:\e[0m     Could not build the test: \e[96m$pathToTest\e[0m"
	echo
	exit 1
fi

# Run the test
osName=$(uname -s)
status=1
out=""
if [[ "$osName" == "Darwin" ]]
then
	out=$(leaks -quiet -atExit -- ./build/run)
	status=$?
	echo "$out"
else
	./build/run 2>&1
	status=$?
fi

if [[ "$status" -ne 0 ]]
then
	echo -e "    \e[91mFAILED:\e[0m    Test failed"
	echo
	exit $status
fi

# Get the coverage
if ! gcov -abt "./build/run-${testName}Test" > /dev/null 2>&1
then
	echo -e "    \e[91mFAILED:\e[0m    Could not process code coverage"
	echo
	exit $status
fi

if ! gcovr "./build/run-${testName}Test.gcda" > /dev/null 2>&1
then
	echo -e "    \e[91mFAILED:\e[0m    Could not process code coverage"
	echo
	exit $status
fi

gcovr --json > ./build/coverage.json 2>/dev/null
filesLen=$(jq ".files" build/coverage.json | jq "length")
for (( fileIndex=0; fileIndex<$filesLen; fileIndex++ ))
do
	fileCovered=$(jq -r ".files[$fileIndex].file" ./build/coverage.json)
	if [[ "$fileCovered" == "${fileUnderTest}" ]]
	then
		break
	fi

	if [[ "./$fileCovered" == "${fileUnderTest}" ]]
	then
		break
	fi
done

if [[ "$fileIndex" -ge "$filesLen" ]]
then
	echo -e "    \e[91mFAILED:\e[0m    No coverage data found"
	echo
	exit 1
fi

total=0
covered=0
uncoveredLines=()
uncoveredBranches=()

lines=$(jq ".files[$fileIndex].lines" ./build/coverage.json)
linesLen=$(echo "$lines" | jq "length")
for (( lineIndex=0; lineIndex<$linesLen; lineIndex++ ))
do
	((total++))
	line=$(echo "$lines" | jq ".[$lineIndex]")
	count=$(echo "$line" | jq ".count")
	lineNumber=$(echo "$line" | jq ".line_number")
	if [[ "$count" -lt 1 ]]
	then
		uncoveredLines+=("Line: $lineNumber is uncovered")
		continue
	fi

	((covered++))

	# Check branches
	branches=$(echo "$lines" | jq ".[$lineIndex].branches")
	branchesLen=$(echo "$branches" | jq "length")
	for (( branchIndex=0; branchIndex<$branchesLen; branchIndex++ ))
	do
		((total++))
		branch=$(echo "$branches" | jq ".[$branchIndex]")
		count=$(echo "$branch" | jq ".count")
		if [[ "$count" -lt 1 ]]
		then
			uncoveredBranches+=("Branch $branchIndex at line: $lineNumber is uncovered")
			continue
		fi
		((covered++))
	done
done

status=0
coverage=$(( $covered * 100 / $total ))
echo -e "    \e[92mPASSED:\e[0m    The test passed with \e[96m${coverage}%\e[0m code coverage"

if [[ "$coverage" -lt 100 ]]
then
	echo -e "    \e[91mERROR:\e[0m     Code coverage for this test is \e[96m${coverage}%\e[0m. You must have 100% code coverage"

	for uncovered in "${uncoveredLines[@]}"
	do
		echo "               $uncovered"
	done
	for uncovered in "${uncoveredBranches[@]}"
	do
		echo "               $uncovered"
	done

	echo
	exit 1
fi

# Check for memory leaks
allocs=0
frees=0
errors=1
memCmd="valgrind --max-threads=5000 --tool=memcheck --leak-check=full --show-leak-kinds=all ./build/run"
if [[ "$osName" == "Darwin" ]]
then
	if echo "$out" | grep "0 leaks for 0 total leaked bytes"
	then
		errors=0
	fi
else
	grindOut=$(valgrind --max-threads=500 --tool=memcheck ./build/run 2>&1)
	heapUsageLine=$(echo "$grindOut" | grep "total heap usage:" | sed -r "s/,//g")
	allocs=$(echo "$heapUsageLine" | sed -r "s/.*usage: ([0-9]+).*/\1/")
	frees=$(echo "$heapUsageLine" | sed -r "s/.*allocs? ([0-9]+) frees.*/\1/")
	errors=$(echo "$grindOut" | grep "ERROR SUMMARY" | sed -r "s/.*ERROR SUMMARY: ([0-9]+).*/\1/")
	if [[ "$allocs" -lt 1 ]] || [[ "$frees" -lt 1 ]]
	then
		echo -e "    \e[91mERROR:\e[0m     Could not determine memory allocations and frees using valgrind"
		echo
		echo "Run the following command to get more information:"
		echo -e "\e[96m$memCmd\e[0m"
		echo
		exit 1
	fi
fi

if [[ "$allocs" -ne "$frees" ]]
then
	echo -e "    \e[91mERROR:\e[0m     Memory leak detected: $allocs allocation(s) and $frees free(s)"
	echo
	echo "Run the following command to get more information:"
	echo -e "\e[96m$memCmd\e[0m"
	echo
	exit 1
fi

if [[ "$errors" -gt 0 ]]
then
	echo -e "    \e[91mERROR:\e[0m     $errors memory error(s) detected"
	echo
	echo "Run the following command to get more information:"
	echo -e "\e[96m$memCmd\e[0m"
	echo
	exit 1
fi

# Remove the build folder
rm -rf build
echo
