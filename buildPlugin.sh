#!/usr/bin/bash

pathToPlugin=$1
example="sh buildPlugin.sh path/to/MyCustomStream.c"

if [ -z "$pathToPlugin" ]
then
	echo -e "\e[91mFAILED:\e[0m Please specify the path to a plugin to build"
	echo -e "Example: \e[96m$example\e[0m"
	echo
	exit 1
fi

if [ ! -e "$pathToPlugin" ]
then
	echo -e "\e[91mFAILED:\e[0m Could not find the plugin \e[96m$pathToPlugin\e[0m"
	echo
	exit 1
fi

# Prepare the build folder
rm -rf ./build
if [ -e build ]
then
	echo -e "\e[91mFAILED:\e[0m Could not remove the existing build folder"
	echo
	exit 1
fi
mkdir build

# Build the shared object
pluginName=$(basename $pathToPlugin ".c")
if ! gcc -pthread -shared -fPIC -o "build/$pluginName.so" "$@"
then
	echo -e "\e[91mFAILED:\e[0m Could not build the shared object"
	echo
	exit 1
fi

if [ ! -e "build/$pluginName.so" ]
then
	echo -e "\e[91mFAILED:\e[0m The build seemed to work, but the shared object file doesn't exist"
	echo
	exit 1
fi

echo -e "\e[92mOK:\e[0m The shared object was successfully built"
echo -e "    and was saved to \e[96mbuild/$pluginName.so\e[0m"
echo
echo -e "    Place this file at \e[96m/usr/lib/Stat/streams/$pluginName.so\e[0m"
echo "    and it'll be automatically loaded as a stream in Stat"
echo
