/**
 * EchoStream
 * This stream simply repeats back what is sent into the stream
 *
 * @license  	MIT
 * @created  	11/26/2025
 */

#ifndef EchoStream_DEF
#define EchoStream_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>
// For NULL
#include <stddef.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "../headers/typeBool.h"
#include "../headers/typeValueRef.h"
#include "../headers/typeStreamValue.h"
#include "../headers/typeStringValue.h"
#include "../headers/typeRuntimeGlobals.h"
#include "../headers/typeStreamDef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "../headers/enValueRefType.h"

//-------------------------------------------------------------------------------------
// Included functions
//-------------------------------------------------------------------------------------
#include "../headers/TrackMem.h"
#include "../headers/FreeMem.h"
#include "../headers/String.h"
#include "../headers/StringType.h"
#include "../headers/AnyType.h"
#include "../headers/StreamType.h"
#include "../headers/RuntimeGlobals.h"
#include "../headers/StreamValue.h"
#include "../headers/ConvertValueToString.h"
#include "../headers/StreamDef.h"
#include "../headers/SetStreamError.h"
#include "../headers/SetStreamResource.h"

//-------------------------------------------------------------------------------------
// Stream functions
//-------------------------------------------------------------------------------------

// This function is called everytime the Stat executable starts up.
//
// It should:
// - Perform any one time initializations that the stream requires in order to function properly
static void InitStream(typeStreamDef* streamDef) {
	// No initialization is necessary for this stream
}

// This function is called when the Stat executable exits.
//
// It should:
// - Perform any operations required to clean up after the stream.
static void CleanupStream(typeStreamDef* streamDef) {
	// No cleanup is necessary for this stream
}

// This function is called every time an open stream expression is called for this stream
//
// It should:
// - Perform any operations required in order to open the stream
// - Set the stream->opened value to true if the open operation succeeded or false otherwise
// - Set the stream->error message if the open operation fails for any reason
// - Set the stream->error to NULL if the open operation succeeds
//
// It must:
// - Make sure that the stream->opened value is set correctly before it returns
// - Make sure that the stream->error is set correctly before it returns
static void OpenCall(typeStreamValue* stream) {

	// Here, we are setting the stream->error to NULL
	// NOTE: Always call the SetStreamError function rather than setting the error directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamError(stream, NULL);

	// Here, we are setting the stream to open. We can set this value directly
	stream->opened = true;
}

// This function is called whenever there is an attempt to close the stream
//
// It should:
// - Perform any operations required in order to close the stream
// - Set the stream->opened value to false if the close operation succeeded
// - Set the stream error->message if the close operation fails for any reason
// - Set the stream error->to NULL if the close operation succeeds
//
// It must:
// - Make sure that the stream->opened value is set correctly before it returns
// - Make sure that the stream->error is set correctly before it returns
static void CloseCall(typeStreamValue* stream) {

	// Here, we are setting the stream->error to NULL
	// NOTE: Always call the SetStreamError function rather than setting the error directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamError(stream, NULL);

	// Here, we are setting the stream to closed. We can set this value directly
	stream->opened = false;
}

// This function is called whenever there is an attempt to send a value / write to the stream
//
// It should:
// - Perform a write operation, whatever that entails... and return the number of bytes written or sent
// - Set the stream->error message if a send operation fails for any reason
// - Set the stream->error to NULL if a send operation succeeds
//
// It MUST:
// - Make sure that the stream->error is set correctly before it returns
// - Return an integer value that represents the number of bytes sent even if the send operation fails.
// - If the value can't be expressed in bytes, then 1 should be returned
static intmax_t SendCall(
	typeStreamValue* stream,
	typeValueRef* data
) {

	// Here, we are setting the stream->error to NULL
	// NOTE: Always call the SetStreamError function rather than setting the error directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamError(stream, NULL);

	// Here, we are setting the stream->resource to NULL
	// NOTE: Always call the SetStreamResource function rather than setting the resource directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamResource(stream, NULL);

	// If the stream isn't opened, we will set a stream->error message and return 0...
	// which is the number of bytes sent
	if (stream->opened != true) {
		SetStreamError(stream, String("You must first open the stream"));
		return 0;
	}

	// We have to call the TrackMem() function before creating allocated values that won't be returned.
	// Remember that C has no garbage collector and so we must manage memory ourselves. The TrackMem()
	// Function gives us an easy way to do that without having to manually free any values that aren't
	// being returned.
	TrackMem();

	// Here, we are converting the value that was sent to the stream into a string. And since this
	// value won't be returned, that is the reason that we called the TrackMem() function above.
	typeValueRef* stringVal = ConvertValueToString(data);

	// If the value that was passed into the stream can't be converted into a string, then we
	// will set the stream->error and return zero
	if (stringVal == NULL || stringVal->type != enValueRefTypeString) {
		SetStreamError(stream, String("Invalid value. Can't send a non string value to the console"));

		// Since we called the TrackMem() function above, we MUST call the FreeMem() function before we
		// return. These 2 functions are always called in pairs. The FreeMem() function takes care
		// of freeing any allocated memory that isn't being returned and that didn't get attached
		// to a stream property.
		FreeMem();
		return 0;
	}

	// Here, we are attaching the converted string value to the stream->resource property.
	// This allows us to store the string value so that we can return it whenever a read operation
	// is performed.
	// NOTE: Always call the SetStreamResource function rather than setting the resource directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamResource(stream, stringVal);

	// Here, we are getting the number of bytes in the string so that we can return it
	typeStringValue* string = stringVal->value;
	intmax_t bytes = string->string->length;

	// Since we called the TrackMem() function above, we MUST call the FreeMem() function before we
	// return. These 2 functions are always called in pairs. The FreeMem() function takes care
	// of freeing any allocated memory that isn't being returned and that didn't get attached
	// to a stream property.
	FreeMem();

	// Return the number of bytes in the string
	return bytes;
}

// This function is called whenever there is an attempt to read from the stream.
//
// It should:
// - Check to make sure that the stream is open before it attempts a read operation
// - If the stream isn't open, it should set the stream->error and return a value
// - Perform a read operation, whatever that entails... and return the resultant value
// - Set the stream error message if a read fails for any reason
// - Set the stream error to NULL if a read succeeds
//
// It MUST:
// - Make sure that the stream error is set correctly before it returns
// - Return a value that is compatible with the stream output type even if the read fails.
static typeValueRef* FetchCall(typeStreamValue* stream) {

	// Here, we are getting the reference to the typeRuntimeGlobals object. This object
	// contains some global values that we can use. We will be using the emptyStringRef value
	// which contains an empty string.
	typeRuntimeGlobals* globals = RuntimeGlobals();

	// Here, we are setting the stream->error to NULL
	// NOTE: Always call the SetStreamError function rather than setting the error directly
	// to make sure that reference counts and memory management are handled properly
	SetStreamError(stream, NULL);

	// If the stream isn't open, then we will set the stream->error and return an emtpy string
	if (stream->opened != true) {
		SetStreamError(stream, String("You must first open the stream"));

		// Here, we return the empty string reference that's already stored in the globals object
		// We could instead create an empty string ourselves and return that, but since it's
		// already available in the globals object, no need to do that.
		//
		// IMPORTANT: We MUST return a value that is compatible with the stream output type
		// In our case, the stream output type is a string, so we MUST return a string value reference
		// no matter what.
		return globals->emptyStringRef;

		// Here is what we could do instead if we didn't want to use the empty string stored in globals
		// return StringRef(StringValue(String("")));
	}

	// Here, we are telling C that the value stored in stream->resource is a typeValueRef pointer
	// And we are assigning that value to the streamResource variable
	typeValueRef* streamResource = stream->resource;

	// If there isn't a value stored in the stream->resource property, then we will set the
	// stream->error and return an empty string
	if (streamResource == NULL) {
		SetStreamError(stream, String("You must first send a string value to the stream in order to read it back"));

		// Here, we return the empty string reference that's already stored in the globals object
		// We could instead create an empty string ourselves and return that, but since it's
		// already available in the globals object, no need to do that.
		//
		// IMPORTANT: We MUST return a value that is compatible with the stream output type
		// In our case, the stream output type is a string, so we MUST return a string value reference
		// no matter what.
		return globals->emptyStringRef;
	}

	// What we could also do as a double precaution is check to make sure that the value is a string
	// before returning it like so, but we don't do that because we already know that it's a string.
	// if (streamResource->type != enValueRefTypeString) {
	// 	SetStreamError(stream, String("Sorry, we couldn't convert the value to a string, so it can't be echoe'd"));
	// 	return globals->emptyStringRef;
	// }

	// OK, The stream resource is set and we know that the value is a string because
	// the only time we set the stream->resource property to a value is in the SendCall function above
	// And we make sure that that value is a string before we set it. So, let's simply return that value.
	return streamResource;
}

// This function is called every time an open stream expression is called for this stream
//
// It MUST:
// - Create and return a typeStreamValue* pointer. You can simply return the result of a call
//   to the StreamValue() function. A typeStreamValue object contains pointers to the functions
//   that will be called for open, close, send, and fetch operations as well as other properties
static typeStreamValue* CreateStream(
	typeStreamDef* streamDef,
	typeValueRef* params
) {

	// The StreamValue function creates a typeStreamValue object and returns a pointer to it
	// Here, we are simply returning the result of that function call.
	return StreamValue(

		// The stream ID. Simply pass in the stream id from the stream definition
		streamDef->streamId,

		// This is the stream URI. This will be available in the stream.uri property
		String("%s://", streamDef->streamId->data),

		// This is the parameter that was passed into the open call.
		// Simply pass in the params value that was passed into this function
		// This is stored at streamValue->params
		params,

		// The buffer size if any. If non zero, then a buffer will be created and stored
		// in the streamValue->buffer property
		0,

		// The stream type. Simply pass in the stream type from the stream definition
		streamDef->streamType,

		// The stream resource if any. If a value is passed in, it'll be stored in the
		// streamValue->resource property.
		// NOTE: You can set this value later using the SetStreamResource function
		NULL,

		// A pointer to the open call function. This function is called immediately after this
		// function returns. It will be called once for each open expression
		OpenCall,

		// A pointer to the close call function. This function is called when a close expression
		// is called on the stream.
		CloseCall,

		// A pointer to the send call function. This function is called whenever data is sent
		// to the stream
		SendCall,

		// A pointer to the fetch call function. This function is called whenever there is an
		// attempt to read from the stream.
		FetchCall
	);
}

//-------------------------------------------------------------------------------------
// Function definition
//-------------------------------------------------------------------------------------

// This function is called when the plugin is loaded.
//
// It MUST:
// - Create a typeStreamDef object and return a pointer to it. The typeStreamDef object
//   contains pointers to functions that are called to initialize, create, and cleanup the stream.
typeStreamDef* EchoStream() {

	// The StreamDef function creates a typeStreamDef object and returns a pointer to it.
	// Here, we are simply returning the result of that function call.
	return StreamDef(

		// A pointer to the initialize function. This will be called once when the Stat executable starts
		// If no initialization is required, then you can pass NULL here
		InitStream,

		// A pointer to a function that creates stream values. This function is called every time
		// a call to open this stream is encountered... in Stat, it would be "open echo"
		// This function MUST NOT be NULL
		CreateStream,

		// A pointer to the cleanup function. This will be called once when the Stat executable exits
		// NOTE: This is not guaranteed to be called. Stat may crash for some reason, before this function
		// gets called. Just know that that is possible. If no cleanup is required, then you can pass NULL here
		CleanupStream,

		// This is the stream id. It MUST match the name of this file except with a lower case first letter
		// and without the "Stream.c" at the end. If it doesn't match, then the plugin won't be loaded
		String("echo"),

		// This is the stream data type
		StreamType(

			// This is the type of parameter that the open expression takes if any.
			// In our case, we don't need to pass a value to the open expression, so we pass NULL here.
			NULL,

			// This is the stream output type. This stream outputs strings
			StringType(false),

			// This is the stream input type. This stream can receive any data type as input
			AnyType(true),

			// This must be false. This determines if the stream type is optional... it must not be optional
			false
		),

		// The documentation for the stream if any. It should be a markdown string
		// Anything longer than this will be wrapped in VSCode's documentation window
		//	.................................................
		String(
			// Documentation should follow this format
			// Start with a short description or purpose of the stream
			"Reads values and echo's them back as a string\n"
			"\n"

			// The open parameter type or none if the stream doesn't take one
			"### Open Parameter:\n"
			"none\n"
			"\n"

			// The input data type or none if the stream is read only
			// We use javascript code fences because it's similar to stat
			// and is more widely supported. IDE's may not give any syntax coloring
			// if we used a stat code block
			"### Input Type:\n"
			"```javascript\n"
			"any\n"
			"```\n"
			"\n"

			// The output data type or none if the stream is write only
			// Again, we can use a javascript code fence if necessary
			"### Output Type:\n"
			"```javascript\n"
			"string\n"
			"```\n"
			"\n"

			// And optionally a short example of how to use the stream
			"### Example\n"
			"```javascript\n"
			"let handle = open echo\n"
			"\n"
			"// Write a value to the stream\n"
			"25 -> handle\n"
			"\n"
			"// Read that value back as a string\n"
			"// result will be \"25\""
			"let result = <- handle\n"
			"```\n"
			"\n"
		)
	);
}

#endif
