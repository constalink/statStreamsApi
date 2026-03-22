# statStreamsApi <!-- omit from toc -->

Provides function and type definitions for creating new stream handlers for the Stat programming language

This repository is intended for **experienced C systems programmers**. Familiarity with C memory management, compiling C shared libraries, running tests, debugging C executables, and general knowledge of the C programming language is assumed throughout this document. No hand-holding is provided except that which the community is willing to give freely. You'll need `gcc`, `valgrind`, and possibly other development tools

- [Overview](#overview)
- [The Stat Stream Model](#the-stat-stream-model)
	- [Creating Values (Code Examples)](#creating-values-code-examples)
- [Plugin Requirements](#plugin-requirements)
	- [Required Interface](#required-interface)
- [Creating a Stream Handler Step By Step](#creating-a-stream-handler-step-by-step)
- [Naming Conventions](#naming-conventions)
- [Components of a Source File](#components-of-a-source-file)
- [Memory Management](#memory-management)
	- [Memory Management Functions](#memory-management-functions)
	- [Allocating Memory Manually](#allocating-memory-manually)
- [The EchoStream plugin. A Simple Example](#the-echostream-plugin-a-simple-example)
- [Testing Your Plugin](#testing-your-plugin)
- [Visual Studio Code Templates](#visual-studio-code-templates)

## Overview

Stream handler plugins extend the Stat input/output system be acting as **bidirectional value channels** between running Stat programs and external systems. Plugins are written in C and loaded dynamically by the Stat runtime.

When a Stat program opens a stream backed by your plugin, it is calling functions that you define that also determine what type of values the stream can read and write. When a program performs a **write** operation on your stream, it is passing a typed value to your plugin for processing. When it performs a **read** operation, your plugin is expected to return values back - a response that conforms to the type of value that you advertise to the system that your stream handler produces. What happens between a **write** and a **read** operation is up to your stream handler. The plugin is the mediator between Stat's value system and whatever external resource, protocol, or computation it represents.

## The Stat Stream Model

Unlike typical byte-based streams, Stat stream handlers operate on **Stat Values** (`typeValueRef*` pointers). A write operation delivers a value from the language runtime into your plugin. A read operation requests a (`typeValueRef*` pointer) from your plugin back into the language runtime.

This has important implications for plugin design:

- Your plugin is not a pipe. It is a **stateful value processor**
- A write does not imply an immediate read. Your plugin must buffer, queue, or derive responses as appropriate for its purpose.
- A read does not imply a prior write. Your plugin may produce values proactively (e.g., from an external event source) or block until one is available, or simply return a default value.
- The runtime will never interleave read and write calls on the same stream from different threads without external synchronization. Although read and write calls may come from different threads, only a single read or write call will be performed at a time.

You should become familiar with the [`typeValueRef`](headers/typeValueRef.h) structure before implementing anything. Please review the following header files:

- [`headers/typeValueRef.h`](headers/typeValueRef.h) - This is a generic value reference. The `type` property tells what type of value it contains
- [`headers/enValueRefType.h`](headers/enValueRefType.h) - An enum of all the possible value types
- [`headers/typeStringValue.h`](headers/typeStringValue.h) - Represents a string value
- [`headers/typeData.h`](headers/typeData.h) - Represents a binary value. This is also the backing for string values
- [`headers/typeIntegerValue.h`](headers/typeIntegerValue.h) - Represents an integer value
- [`headers/typeInteger.h`](headers/typeInteger.h) - Backing for integer, range, and fraction values
- [`headers/typeFractionValue.h`](headers/typeFractionValue.h) - Represents a fraction value
- [`headers/typeFraction.h`](headers/typeFraction.h) - Backing for a fraction value
- [`headers/typeBoolValue.h`](headers/typeBoolValue.h) - Represents a boolean value
- [`headers/typeBool.h`](headers/typeBool.h) - Backing for a boolean value
- [`headers/typeRegExp.h`](headers/typeRegExp.h) - Represents a regular expression value
- [`headers/typeRangeValue.h`](headers/typeRangeValue.h) - Represents a range value
- [`headers/typeValueRefList.h`](headers/typeValueRefList.h) - Represents a list value
- [`headers/typeValueRefDict.h`](headers/typeValueRefDict.h) - Represents a struct value
- [`headers/typeStreamValue.h`](headers/typeStreamValue.h) - Represents a stream value

Creating `typeValueRef*` pointers **must** be done by calling the appropriate constructor function. Please become familiar with the following header files which define the functions used to create the values that your plugin is expected to return:

- Creating String Values
  - [`headers/StringRef.h`](headers/StringRef.h) - Returns a `typeValueRef*` pointer that contains a string value
  - [`headers/StringValue.h`](headers/StringValue.h) - Returns a `typeStringValue*` pointer which contains a string
  - [`headers/String.h`](headers/String.h) - Returns a raw [`typeData*`](headers/typeData.h) pointer which contains a null terminated string

- Creating Binary Values
  - [`headers/BinaryRef.h`](headers/BinaryRef.h) - Returns a `typeValueRef*` pointer that contains a binary value
  - [`headers/Binary.h`](headers/Binary.h) - Returns a raw uninitialized [`typeData*`](headers/typeData.h) pointer of a given length
  - [`headers/MakeBinary.h`](headers/MakeBinary.h) - Returns a raw [`typeData*`](headers/typeData.h) pointer initialized with passed in bytes

- Creating Integer Values
  - [`headers/IntRef.h`](headers/IntRef.h) - Returns a `typeValueRef*` pointer that contains an integer value
  - [`headers/IntegerValue.h`](headers/IntegerValue.h) - Returns a `typeIntegerValue*` pointer
  - [`headers/enNumberType.h`](headers/enNumberType.h) - An enum that defines the possible integer types
  - [`headers/Integer.h`](headers/Integer.h) - Returns a `typeInteger*` pointer
  - [`headers/IntZero.h`](headers/IntZero.h) - Returns a 0 value `typeIntegerValue*` pointer. This is a shortcut function to create a frequently used integer value
  - [`headers/IntOne.h`](headers/IntOne.h) - Returns a 1 `typeIntegerValue*` pointer. This is a shortcut function to create a frequently used integer value
  - [`headers/IntNegOne.h`](headers/IntNegOne.h) - Returns a -1 `typeIntegerValue*` pointer. This is a shortcut function to create a frequently used integer value
  - [`headers/IntInfinity.h`](headers/IntInfinity.h) - Returns an infinity `typeIntegerValue*` pointer. This is a shortcut function to create a frequently used integer value
  - [`headers/IntNegInfinity.h`](headers/IntNegInfinity.h) - Returns a -infinity `typeIntegerValue*` pointer. This is a shortcut function to create a frequently used integer value

- Creating Fraction Values
  - [`headers/FractionRef.h`](headers/FractionRef.h) - Returns a `typeValueRef*` pointer that contains a fraction value
  - [`headers/FractionValue.h`](headers/FractionValue.h) - Returns a `typeFractionValue*` pointer
  - [`headers/enNumberType.h`](headers/enNumberType.h) - An enum that defines the possible fraction types
  - [`headers/Fraction.h`](headers/Fraction.h) - Returns a `typeFraction*` pointer
  - [`headers/Integer.h`](headers/Integer.h) - Returns a `typeInteger*` pointer which defines the integer, numerator, and denominator values of a fraction
  - [`headers/FractZero.h`](headers/FractZero.h) - Returns a 0.0 `typeFractionValue*` pointer. This is a shortcut function to create a frequently used fraction value.
  - [`headers/FractOne.h`](headers/FractOne.h) - Returns a 1.0  `typeFractionValue*` pointer. This is a shortcut function to create a frequently used fraction value
  - [`headers/FractNegOne.h`](headers/FractNegOne.h) - Returns a -1.0 `typeFractionValue*` pointer. This is a shortcut function to create a frequently used fraction value
  - [`headers/FractInfinity.h`](headers/FractInfinity.h) - Returns an infinity `typeFractionValue*` pointer. This is a shortcut function to create a frequently used fraction value
  - [`headers/FractNegInfinity.h`](headers/FractNegInfinity.h) - Returns a -infinity `typeFractionValue*` pointer. This is a shortcut function to create a frequently used fraction value

- Creating Boolean Values
  - [`headers/BoolRef.h`](headers/BoolRef.h) - Returns a `typeValueRef*` pointer that contains a boolean value
  - [`headers/BoolFalse.h`](headers/BoolFalse.h) - Returns a `typeValueRef*` pointer that contains a false boolean value
  - [`headers/BoolTrue.h`](headers/BoolTrue.h) - Returns a `typeValueRef*` pointer that contains a true boolean value

- Creating Regular Expression Values
  - [`headers/RegExpRef.h`](headers/RegExpRef.h) - Returns a `typeValueRef*` pointer that contains a regular expression value
  - [`headers/RegExp.h`](headers/RegExp.h) - Returns a `typeRegExp*` pointer
  - [`headers/String.h`](headers/String.h) - Returns a [`typeData*`](headers/typeData.h) pointer which contains the match pattern

- Creating Range Values
  - [`headers/RangeRef.h`](headers/RangeRef.h) - Returns a `typeValueRef*` pointer that contains a range value
  - [`headers/RangeValue.h`](headers/RangeValue.h) - Returns a `typeRangeValue*` pointer
  - [`headers/IntegerValue.h`](headers/IntegerValue.h) - Returns a `typeIntegerValue*` pointer which defines the start and end values of a range
  - [`headers/Integer.h`](headers/Integer.h) - Returns a `typeInteger*` pointer which is the backing for a `typeIntegerValue*`
  - [`headers/enNumberType.h`](headers/enNumberType.h) - An enum that defines the possible integer types

- Creating Empty Values
  - [`headers/EmptyRef.h`](headers/EmptyRef.h) - Returns a `typeValueRef*` pointer that contains an empty value

- Creating List Values
  - [`headers/ListRef.h`](headers/ListRef.h) - Returns a `typeValueRef*` pointer that contains a list value
  - [`headers/List.h`](headers/List.h) - Returns a `typeList*` pointer that can be cast to a `typeValueRefList*` pointer

- Creating Struct Values
  - [`headers/DictRef.h`](headers/DictRef.h) - Returns a `typeValueRef*` pointer that contains a struct value
  - [`headers/Dict.h`](headers/Dict.h) - Returns a `typeDict*` pointer that can be cast to a `typeValueRefDict*` pointer

### Creating Values (Code Examples)

**Creating string values**
```c
// To create a string value
typeValueRef* stringVal = StringRef(StringValue(String("Hello World")));

// The String function supports standard C formatters
stringVal = StringRef(StringValue(String("Name: %s, Age: %ld", "John", 30)));
```

**Creating binary values**
```c
// Creates an uninitialized binary value that's 2 bytes long
typeData* bin = Binary(2);

// We can initialize it by assigning values to each byte
bin->data[0] = (uint8_t) 0x81;
bin->data[1] = (uint8_t) 0xf2;

// We can pass this value into the BinaryRef function to
// create a typeValueRef* pointer that Stat can use
typeValueRef* binRef = BinaryRef(bin);

// We can do this all at once with the MakeBinary function
// This results in the same value as above
binRef = BinaryRef(MakeBinary(2, 2, (uint8_t) 0x81, (uint8_t) 0xf2));

// We can have a hybrid approach. The MakeBinary function
// can create a binary value that is partially initialized
// This creates a 4 byte binary value that's initialized with 2 bytes
bin = MakeBinary(4, 2, (uint8_t) 0x81, (uint8_t) 0xf2);

// Now we can initialize the remaining bytes
bin->data[2] = (uint8_t) 0xc1;
bin->data[3] = (uint8_t) 0x7a;
binRef = BinaryRef(bin);
```

**Creating integer values**
```c
// To create an integer value that contains 3225
typeValueRef* intVal = IntRef(IntegerValue(enNumberTypePositive, Integer(1, 1, (uint64_t) 3225)));

// To create -3225
intVal = IntRef(IntegerValue(enNumberTypeNegative, Integer(1, 1, (uint64_t) 3225)));

// To create a really big integer... 1024 bit
typeValueRef* bigInt = IntRef(
	IntegerValue(
		enNumberTypePositive,
		Integer(16, 16,
			(uint64_t) 0x921cb80fc2c871b4,
			(uint64_t) 0xe633337364f1ab7e,
			(uint64_t) 0x0897da6b2001d0d6,
			(uint64_t) 0x725bb329dc696e2c,
			(uint64_t) 0xebf9c11dff0f00d9,
			(uint64_t) 0x1bcea56a30ffae16,
			(uint64_t) 0xc217dba37eadc98c,
			(uint64_t) 0xd72887ffb56cf870,
			(uint64_t) 0x82565e61c19411d8,
			(uint64_t) 0xbcd112894abdf589,
			(uint64_t) 0x209439999191293a,
			(uint64_t) 0xec45a78cdef12098
			(uint64_t) 0xDAC4BDF9222D8A29,
			(uint64_t) 0x6A98BCF1492F5990,
			(uint64_t) 0xFAF6196D3344B8C5,
			(uint64_t) 0x04F7005A643CDE39
		)
	)
)
```

**Creating fraction values**
```c
// To create a fraction 7 and 1/3rd
typeValueRef* fractVal = FractionRef(
	FractionValue(
		enNumberTypePositive,
		Fraction(
			// Whole number
			Integer(1, 1, (uint64_t) 7),
			// Numerator
			Integer(1, 1, (uint64_t) 1),
			// Denominator
			Integer(1, 1, (uint64_t) 3)
		)
	)
);
```

**Creating boolean values**
```c
// To create true
typeValueRef* trueRef = BoolTrue();
// To create false
typeValueRef* falseRef = BoolFalse();

// To create a boolean value if you don't know what it will be
typeBool yesNo = true;
typeValueRef* boolVal = BoolRef(yesNo);
```

**Creating regular expression values**
```c
// To create a regular expression
typeValueRef* regExpVal = RegExpRef(
	RegExp(
		// The pattern without any slashes
		String("[a-z]+")
		// Ignore case
		true,
		// Multi line
		false,
		// Dot all
		false
	)
);
```

**Creating range values**
```c
// To create a range value 10 to 200 including 200
typeValueRef* rangeVal = RangeRef(
	RangeValue(
		// The start of the range
		IntegerValue(enNumberTypePositive, Integer(1, 1, (uint64_t) 10)),
		// The end of the range
		IntegerValue(enNumberTypePositive, Integer(1, 1, (uint64_t) 200)),
		// Whether or not include the end value
		true
	)
);
```

**Creating empty values**
```c
typeValueRef* emptyVal = EmptyRef();
```

**Creating list values**
```c
// Creates a list with 2 string values
typeValueRef* listRef = ListRef(
	List(2, 2,
		StringRef(StringValue(String("Hello"))),
		StringRef(StringValue(String("World")))
	)
);
```

**Creating struct values**
```c
// Creates a struct value with 2 key/value pairs
typeValueRef* structRef = DictRef(
	Dict(2,
		String("firstName"), StringRef(StringValue(String("John"))),
		String("lastName"), StringRef(StringValue(String("Doe")))
	)
);
```

## Plugin Requirements

All Stat stream handler plugins **must** conform to the following:

### Required Interface

Every stream handler plugin must define **exactly** one public function that matches the name of the source file (minus the .c extension) that takes no arguments and that returns a [`typeStreamDef*`](headers/typeStreamDef.h) pointer. That [`typeStreamDef*`](headers/typeStreamDef.h) pointer should contain everything necessary for a stream handler. No other public functions or symbols are allowed. Any helper functions or symbols must be declared static.

## Creating a Stream Handler Step By Step

> HINT: Check out the `EchoStream.c` file in the `example` folder to understand how to create a Stat stream handler plugin. It is heavily commented and gives a general idea of what each function should and must do.

Creating a stream handler plugin for the Stat programming language is fairly simple. All you need to do is create a source `c` file and compile it into a shared object. Then copy that shared object into the stream plugins folder which on linux is usually located at `/usr/lib/Stat/streams/`. That stream plugin will then be available in the language. Here are the steps in detail:

- **Create the source file:** The name of the source file should start with a capital letter and end with `Stream.c`. Take the `EchoStream.c` file as an example. The name of this file satisfies those requirements. The name of the file also dictates the name of the stream we are creating. The name of the stream must match the  name of the file except with a lower case starting letter and without the ending `Stream.c`. For the `EchoStream.c` file, the name of the stream is `echo`. For a file named: `MyCustomStream.c`, the stream name would be `myCustom`

  The file must contain a function that matches the name of the file that takes no arguments and that returns a [`typeStreamDef*`](headers/typeStreamDef.h) pointer. That [`typeStreamDef*`](headers/typeStreamDef.h) pointer should contain everything necessary for a stream handler. Take a look at the `EchoStream.c` file in the `example` folder. In the `EchoStream.c` file, there is a function with this signature that satisfies this requirement: `typeStreamDef* EchoStream()`. Every other symbol in the file must be declared static so that it isn't exported and won't conflict with other plugins

  A [`typeStreamDef*`](headers/typeStreamDef.h) pointer will contain references to helper functions such as an `init` function, a `cleanup` function, and a `create` function as well as other values. Take a look at the following header files for more information on `typeStreamDef` values

  - [`headers/typeStreamDef.h`](headers/typeStreamDef.h) - Defines the `typeStreamDef` structure
  - [`headers/StreamDef.h`](headers/StreamDef.h) - Function that creates and returns a [`typeStreamDef*`](headers/typeStreamDef.h) pointer

- **Compile the source file:** Once you are done creating the source file, you need to compile it into a shared object. To do that, simply compile the file using `gcc`. If you are on linux, you can simply run the `buildPlugin.sh` file which handles the compilation for you. Otherwise, you should compile it using the following syntax. In this example, the source file is named `MyCustomStream.c`  
  `gcc -pthread -shared -fPIC -o MyCustomStream.so MyCustomStream.c`  
  You should end up with a file named `MyCustomStream.so`

- **Copy the shared object file:** Next, copy the compiled shared object file to the stream plugins folder which is located at `/usr/lib/Stat/streams/` on linux.

## Naming Conventions

- The name of a plugin source file **must** start with a capital letter and end with `Stream.c`

- The source file **must** contain **exactly** one function that matches the name of the source file minus the `.c` extension. This function must take no arguments and return a [`typeStreamDef*`](headers/typeStreamDef.h) pointer

- The name of the stream as defined in the [`typeStreamDef*`](headers/typeStreamDef.h) value that's returned **must** match  the name of the file except with a lower case first letter and without the `Stream.c` at the end.

- The name of the init function **should** be `InitStream`

- The name of the cleanup function **should** be `CleanupStream`

- The name of the create stream function **should** be `CreateStream`

- The name of the open function **should** be `OpenCall`

- The name of the close function **should** be `CloseCall`

- The name of the send or write function **should** be `SendCall`

- The name of the fetch or read function **should** be `FetchCall`

## Components of a Source File

- As mentioned above a plugin source file should contain **exactly** one public function that matches the name of the file. This function must return a [`typeStreamDef*`](headers/typeStreamDef.h) pointer which contains pointers to the following components:

  - The `InitStream` function - This function is called when the Stat executable starts up. It should perform any initializations that the stream needs to function properly

  - The `CleanupStream` function - This function is called when the Stat executable exits cleanly. It should perform any operations required to clean up after the stream

  - The `CreateStream` function - This function is called every time an `open streamName` expression is called. It must create and return a [`typeStreamValue*`](headers/typeStreamValue.h) pointer. You can simply return the result of a call to the [`StreamValue()`](headers/StreamValue.h) function.

  - The stream name - This **must** be a [`typeData*`](headers/typeData.h) pointer that contains the name of the stream. It **must** match the name of the source file except with a lower case first letter and minus the `Stream.c` at the end of the source file name

  - The stream type - This **must** be a [`typeType*`](headers/typeType.h) pointer which defines the open parameter type, the input value type, and the output value type.

  - Documentation - This **should** be a [`typeData*`](headers/typeData.h) pointer that contains the documentation for the stream in markdown format

- The stream value. This is a [`typeStreamValue*`](headers/typeStreamValue.h) pointer that is returned by the `CreateStream` function which contains the
  following components:

  - The `OpenCall` function - This function is called every time an `open streamName` expression is called. It should perform any operations required to open the stream and set the `stream->opened` value to `true` if the operation succeeded.

  - The `CloseCall` function - This function is called every time a `close handle` expression is called. It should perform any operations required to close the stream and set the `stream->closed` value to `false` if the operation succeeded.

  - The `SendCall` function - This function is called every time there is an attempt to send a value / write to the stream. It should perform a write operation, whatever that entails, and return the number of bytes written or sent

  - The `FetchCall` function - This function is called whenever there is an attempt to read from the stream. It should perform a read operation, whatever that entails, amd return the resultant value

## Memory Management

You must *keep track* of all the memory that your functions allocate and you must free any value that you don't return or keep track of it so that you can free it at some point. Instead of an ownership memory management model, Stat uses a stack based memory manager model where all memory is tracked using memory manager structs. Every time a new value is allocated, it is automatically tracked on the most recent memory tracker. There are several functions that you can use to help you manage memory correctly. Here is a list of those function and what they do:

### Memory Management Functions

- [The `TrackMem` Function](headers/TrackMem.h) - You **should** call the `TrackMem()` function before creating any [`typeValue*`](headers/typeValue.h) based allocated values that won't be returned. Once called, the `TrackMem()` function creates a memory stack that keeps track of all allocated values that need to be freed. Every call to `TrackMem` pushes a new memory tracker unto the stack.

  ```c
  // TrackMem() Example: 
  static void SampleFunction() {
	// Add a new memory tracker to the stack
	TrackMem();

	// Create a string, which allocates memory
	// We either have to free this value before returning
	// or we have to return this value... Since we called
	// TrackMem() above, we can simply call FreeMem() to free it
	typeStringValue* stringVal = StringValue(String("Hello World"));

	// The same thing applies to this string value
	// Since we called TrackMem() we don't have to worry about
	// freeing it manually. We can just call FreeMem()
	typeStringValue* stringVal2 = StringValue(String("Have a nice day"));

	// Frees both stringVal and stringVal2... and any other values
	// that were created since the last call to TrackMem()
	FreeMem();
  }
  ```

- [The `FreeMem` Function](headers/FreeMem.h) - You **must** call the `FreeMem()` function **exactly** once for every call to `TrackMem()`. This function frees all memory that has been allocated since the last call to `TrackMem()`. Calls to `TrackMem()` and `FreeMem()` **must** be balanced. The convention is to call `TrackMem()` at the start of a function and call `FreeMem()` at the end of the function. `FreeMem()` essentially *pops* the most recent memory stack and frees all memory that's tracked on that stack.
  
  Although it's usually unnecessary, memory stacks can be created multiple times within the same function. You just need to balance calls to `TrackMem()` and `FreeMem()`. Here's an example of what that might look like:

  ```c
  static void SampleFunction() {
	// Add a new memory tracker to the stack
	TrackMem();

	// This is tracked on the memory stack that we just
	// created by calling TrackMem above
	typeData* tracked = String("Hello");

	// Add another memory tracker to the stack
	TrackMem();

	// This value is tracked on the new stack
	typeData* subTracked = String("World");

	// This frees "subTracked" and pops the last memory stack
	FreeMem();

	// This frees "tracked" and pops the first memory stack
	FreeMem();
  }
  ```

- [The `ElevateValue` Function](headers/ElevateValue.h) - You **must** call this function to *elevate* a value to the upper memory stack if you are going to return it and if you have already called the `TrackMem()` function. If you don't call this function with a value that you plan to return, and you call `FreeMem()` then the value will be freed which will most likely lead to segmentation faults

  ```c
  // ElevateValue() Example:
  static typeStringValue* Greeting() {
	// Add a new memory tracker to the stack
	TrackMem();

	// Create a string value
	typeStringValue* stringVal = StringValue(String("Hello There"));
	typeStringValue* ignore = StringValue(String("Ignore me"));

	// Since I called TrackMem(), I can't return stringVal
	// without elevating it to the upper memory stack... Let's do that
	ElevateValue(stringVal);

	// Now calling FreeMem will only free ignore, and not stringVal
	FreeMem();

	// I can now return stringVal safely
	return stringVal;
  }
  ```

- [The `Return` macro](headers/FreeMem.h) - Instead of calling `ElevateValue(value)` followed by `FreeMem()` followed by `return value`, you can instead use the `Return` macro that's defined in the [`headers/FreeMem.h`](headers/FreeMem.h) header file. Here's the same example as above, except using the `Return` macro instead.

  ```c
  static typeStringValue* Greeting() {
	// Add a new memory tracker to the stack
	TrackMem();

	// Create a string value
	typeStringValue* stringVal = StringValue(String("Hello There"));
	typeStringValue* ignore = StringValue(String("Ignore me"));

	// I can use the Return macro to both elevate a value
	// and free all other tracked memory.
	Return(stringVal);

	// The above code expands to:
	// ElevateValue(stringVal); FreeMem(); return stringVal;
  }
  ```

  **IMPORTANT**: This macro only works for `typeValue*` based structs Don't use this macro for returning `int` or other primitive values as the `ElevateValue()` function expects a `typeValue*` based pointer. Also, don't pass expressions to the Return macro. It only handles single variable names. Take this example:

  ```c
  Return(func());
  ```

  This expands to:

  ```c
  Elevate(func()); FreeMem(); return func();
  ```

  You can see that `func()` is called twice which isn't intended

- [The `ReturnVoid` macro](headers/FreeMem.h) - If you have a function that doesn't return anything (AKA a void function) then you can use the `ReturnVoid` macro. Here's an example:
  
  ```c
  static void SomeFunction() {
	// Add a new memory tracker to the stack
	TrackMem();

	// Create a value that must be freed before returning
	// Since I called TrackMem above, this value is tracked on
	// the current memory stack
	typeData* someValue = String("Hello World");

	// I can use the ReturnVoid macro to both free
	// values tracked on the memory stack and to return nothing
	ReturnVoid;

	// The above code expands to:
	// FreeMem(); return; 
  }
  ```

- [The `ElevateMem` Function](headers/ElevateMem.h) - This function is similar to the `ElevateValue` function in that it elevates a value to an upper level memory stack. The difference with this function is that it takes a pointer to a `typeMemStack` which represents the memory stack to elevate the value to. Since `typeValue*` based pointers retain a reference to their memory stacks in the `memStack` property, a common approach is to elevate a value to the memory stack where another value is tracked. Take this example:

  ```c
  static void MyMemFunction(typeValue* otherValue) {
	// Add a new memory tracker to the stack
	TrackMem();

	// Create a value that we aren't going to use
	typeData* ignored = String("ignore");

	// Create a value that must not be freed on return
	// Let's say we want this value elevated to the same
	// memory stack that otherValue is tracked on
	typeData* important = String("important");

	// Let's use the ElevateMem function to do that
	ElevateMem(important, otherValue->memStack);

	// Now, we can use the ReturnVoid macro which
	// will free the ignored value but not important
	ReturnVoid;
  }
  ```

  The example above is actually a bad example because even though we have elevated the `important` value to a different memory stack, we didn't do anything with it so it'll just be an unaccessible variable that will remain allocated until the memory stack it's tracked on gets freed. This code example above was just an example to illustrate how the `ElevateMem` function works.

- [The `PauseMem` Function](headers/PauseMem.h) - This function pauses the tracking of the current memory stack. Anything that gets allocated after calling this function gets tracked on the upper level memory stack. Calling `PauseMem` and then creating a value is equivalent to creating a value, then calling `ElevateValue` on that value.

- [The `StartMem` Function](headers/StartMem.h) - This function is the opposite of the `PauseMem` function. It resumes memory tracking for the current memory stack. Calls to `PauseMem` and `StartMem` **must** be balanced. Every call to `PauseMem` requires a later call to `StartMem` before calling `FreeMem` on the memory stack. Here is an example of how this works:

  ```c
  static void MyPauseFunction() {
	// Add a new memory tracker to the stack
	TrackMem();

	// This value is tracked on the current memory stack
	typeData* tracked = String("tracked");

	// This pauses the current memory tracker
	// Any values created after this are tracked on the
	// upper level memory stack
	PauseMem();

	// This value is tracked on the upper level memory stack
	typeData* trackedOnUpperStack = String("upper");

	// Restarts the memory tracker
	StartMem();

	// This frees the tracked value, but not
	// the trackOnUpperStack value
	ReturnVoid;
  }
  ```

- [The `CurrentMemStack` Function](headers/CurrentMemStack.h) - This function simply returns a pointer to the latest memory stack that was created with `TrackMem()`

- [The `FreeValueTree` Function](headers/FreeValueTree.h) - This function expects a `typeValue*` based pointer. What it does is free the value passed in as well as all `typeValue*` based children as long as they have no other references to them.

  > **IMPORTANT** This function should only be used if you know the implications. Care should be used with this function because you may accidentally free a value that you need later. You should use the `TrackMem()` and `FreeMem()` functions instead if possible. These functions handle freeing values automatically

- [The `Global` Function](headers/Global.h) - This function expects a `typeValue*` based pointer. What it does is elevate the value to the highest memory stack which is called the *Global Memory Stack*. Anything tracked on the Global Memory Stack never gets freed until the program exits.

- [The `IsGlobal` Function](headers/IsGlobal.h) - This function expects a `typeValue*` based pointer. It returns `true` if the value is tracked on the Global Memory Stack or `false` if not.

- [The `SetStructValue` Function](headers/SetStructValue.h) - This function sets the value of a `typeValue*` based struct member. This is necessary because you can't just set the value of a `typeValue*` based struct member directly. If you do, then reference counts will be off and you will undoubtedly introduce memory errors. Use the `SetStructValue` function instead. It takes care of properly incrementing reference counts for the value being set and decrementing reference counts for the value that it replaces. Here is an example that demonstrates the use of this function:

  ```c
  // Lets say I have this struct that's typeValue based
  typedef struct typeCustomValue {
	VALUEMEMBERS;
	typeData* message;
  } typeCustomValue;

  // This function sets a custom message for a typeCustomValue struct
  static void AddValueToStruct(typeCustomValue* customValue) {

	// Create a new value.
	typeData* myMessage = String("Hello World");

	// Let's say that I want to set the message property of customValue
	// Don't do this:  customValue->message = myMessage;
	
	// Instead, call the SetStructValue function
	SetStructValue((typeValue**) &customValue->message, myMessage);

	// There's one more thing that we must do. If customValue
	// is tracked on a different memory stack, we must elevate myMessage
	// to the correct memory stack or it might be freed before it's used
	ElevateMem(myMessage, customValue->memStack);
  }
  ```

- [The `SetIndexInPlace` Function](headers/SetIndexInPlace.h) - This function expects a `typeList*` pointer, a `typeValue*` based pointer, and an index. What it does is set a value at a given index in a list. This function is necessary because you can't just set the value at a list index directly. If you do, then reference counts will be off and you will undoubtedly introduce memory errors. Use the `SetIndexInPlace` function instead. Similarly to the `SetStructValue` function, it takes care of properly incrementing reference counts for the value being set and decrementing reference counts for the value that it replaces. Here is an example that demonstrates the use of this function:

  ```c
  static void AddValueToList(typeDataList* myList) {

	// Creates a new value
	typeData* element = String("Hello World");

	// Let's say that I want to set this as the 3rd element in the list
	// Don't do this:  myList->list[2] = element;

	// Instead, call the SetIndexInPlace function
	SetIndexInPlace(myList, element, 2);

	// There is one more thing that we must do. If myList
	// is tracked on a different memory stack, we must elevate
	// element to the correct memory stack or it might be freed
	// before it is used.
	ElevateMem(element, myList->memStack);
  }
  ```

### Allocating Memory Manually

If you plan on using `malloc` or `calloc` to allocate memory yourself, you **must** free it yourself as well. There is no  concept of transferring ownership outside of your plugin or transferring it back to the Stat runtime. The values that get returned back to the Stat runtime are `typeValueRef*` pointers which are automatically tracked by the Stat runtime provided that you properly elevate those values to the upper level memory stack using the functions outlined above.

## The EchoStream plugin. A Simple Example

Have a look at the [EchoStream](example/EchoStream.c) plugin. This is a simple example that is heavily commented and does its best to explain what is expected at every point in the file. Please review this file in detail from top to bottom. Don't skim this file... read it in its entirety from top to bottom.

This plugin can be compiled, installed, and used as is... It'll take any value as input, and echo a string value in return. To compile this plugin, run this command from the root folder in this repository:

```bash
sh buildPlugin.sh example/EchoStream.c
```

Install this plugin with the following command:
```bash
sudo cp build/EchoStream.so /usr/lib/Stat/streams/
```

Once this plugin is installed, you can use it in your Stat files like so:

```javascript
// echo.stat
MAIN

	// Open an echo stream
	let handle = open echo

	// Send a string value to the stream
	"Hello World" -> handle

	// response will contain "Hello World"
	let response = <- handle
	close handle
```

## Testing Your Plugin

You can and **should** write tests for your stream plugin. To do this, simply create a `tests` folder and create the test file. The test file should be named `<StreamName>StreamTest.c`. Substitute `<StreamName>` with the name of your stream. For the `EchoStream` this file is named `EchoStreamTest.c` - [Check out this test file](example/tests/EchoStreamTest.c), it's located in the `example/tests` folder. Once you've created the file, you can use the **Stream Test Template** code snippet to create some quick boilerplate code. You can then start coding away. To run your test, use the `runTest.sh` bash script. Here is a quick rundown:

- **Create Your Test File** - Save it in the `tests` folder and name it the same as your plugin file except append `Test.c` at the end. For `EchoStream.c` the test file should be named `EchoStreamTest.c`

- **Write Your Tests** - You can use the **Stream Test Template** code snippet to create some quick boilerplate code. Then start coding away. Make sure you write tests for opening the stream, writing to the stream, reading from the stream, and closing the stream. You should also test to make sure that unexpected situations are handled correctly. For example, you should test what happens when you try to write to a closed stream or what happens when you try to write an invalid value type to the stream. You can use functions in the `testing` folder to test that values match what's expected.

- **Run Your Tests** - To run your tests, execute the `runTest.sh` file. Or simply take a look at what that file does. To simplify, it builds your test, then runs it. Then it runs valgrind to test your plugin for memory leaks and other memory errors. You can call the `runTest.sh` file like this

  ```bash
  sh runTest.sh examples/tests/YourStreamTest.c
  ```

  > The `runTest.sh` script expects that the file under test (AKA your plugin source file) is one level up and has the same name as the test file except without `Test` at the end.

  Try running the `examples/tests/EchoStreamTest.c` test and see if it works.

  ```bash
  sh runTest.sh examples/tests/EchoStreamTest.c
  ```

## Visual Studio Code Templates

This repository includes some Visual Studio Code templates that provide the framework for plugins and for test files. Have a look in the `.vscode/templates.code-snippets` file. You can simply copy this file into your own project in the `.vscode` folder and the snippets should be available.
