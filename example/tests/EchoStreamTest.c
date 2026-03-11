/**
 * EchoStreamTest
 * Unit tests for EchoStream
 *
 * To run this test, execute the following command from the example folder
 * sh ../runTest.sh tests/EchoStreamTest.c
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/4/2025
 * @copyright	Constalink, all rights reserved
 */

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
#include "../../headers/typeBool.h"
#include "../../headers/typeData.h"
#include "../../headers/typeValueRef.h"
#include "../../headers/typeStreamDef.h"
#include "../../headers/typeStreamValue.h"
#include "../../headers/typeStringValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "../../headers/enValueRefType.h"
#include "../../headers/enNumberType.h"

//-------------------------------------------------------------------------------------
// Included functions
//-------------------------------------------------------------------------------------
#include "../../testing/TestTrue.h"
#include "../../testing/TestFalse.h"
#include "../../testing/TestIntsEqual.h"
#include "../../testing/TestStringsEqual.h"
#include "../../testing/TestNull.h"
#include "../../testing/TestNotNull.h"

#include "../../headers/TestMemLeak.h"
#include "../../headers/TrackMem.h"
#include "../../headers/FreeMem.h"
#include "../../headers/String.h"
#include "../../headers/StringRef.h"
#include "../../headers/StringValue.h"
#include "../../headers/Integer.h"
#include "../../headers/IntegerValue.h"
#include "../../headers/IntInfinity.h"
#include "../../headers/IntRef.h"
#include "../../headers/ListRef.h"
#include "../../headers/List.h"
#include "../../headers/RangeValue.h"
#include "../../headers/RangeRef.h"
#include "../../headers/BinaryRef.h"
#include "../../headers/MakeBinary.h"
#include "../../headers/SetStreamError.h"

#include "../EchoStream.c"

//-------------------------------------------------------------------------------------
// Global variables
//-------------------------------------------------------------------------------------
extern typeData* streamsPluginsFolder;

//-------------------------------------------------------------------------------------
// Test function
//-------------------------------------------------------------------------------------
int32_t main() {
	TrackMem();

	// Don't load any other plugins
	streamsPluginsFolder = String("tests/noPlugins");
	TestMemLeak(streamsPluginsFolder);

	typeStreamDef* streamDef = EchoStream();
	TestMemLeak(streamDef);
	streamDef->initFunc(streamDef);

	typeStreamValue* stream = streamDef->createFunc(
		streamDef,
		NULL
	);
	TestMemLeak(stream);
	TestNull(stream->resource);
	TestNull(stream->error);
	TestFalse(stream->opened);

	// Start a new memory stack so that errors on the stream don't need to be
	// memory tested
	TrackMem();

	// Test sending and receiving when the stream is closed
	typeValueRef* string = StringRef(StringValue(String("Hello World")));
	TestMemLeak(string);
	intmax_t bytes = stream->sendFunc(stream, string);
	TestIntsEqual(bytes, 0);
	TestNotNull(stream->error);
	SetStreamError(stream, NULL);

	typeValueRef* received = stream->fetchFunc(stream);
	TestMemLeak(received);
	TestIntsEqual(received->type, enValueRefTypeString);
	typeStringValue* stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "");
	TestNotNull(stream->error);
	TestFalse(stream->opened);

	// Test opening and closing the stream
	stream->openFunc(stream);
	TestTrue(stream->opened);
	TestNull(stream->error);
	stream->closeFunc(stream);
	TestFalse(stream->opened);
	TestNull(stream->error);

	// Open the stream again so that we can test sending and receiving data
	stream->openFunc(stream);
	TestTrue(stream->opened);
	TestNull(stream->error);

	// Try reading before anything has been sent
	received = stream->fetchFunc(stream);
	TestMemLeak(received);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "");
	TestNotNull(stream->error);

	bytes = stream->sendFunc(stream, string);
	TestIntsEqual(bytes, 11);
	TestNull(stream->error);
	received = stream->fetchFunc(stream);
	TestMemLeak(received);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "Hello World");
	TestNull(stream->error);

	// Try sending a non string. It should be converted to a string
	typeValueRef* integer = IntRef(
		IntegerValue(
			enNumberTypePositive,
			Integer(2, 2, (uint64_t) 100, (uint64_t) 201)
		)
	);
	TestMemLeak(integer);
	bytes = stream->sendFunc(stream, integer);
	TestIntsEqual(bytes, 22);
	TestNull(stream->error);
	received = stream->fetchFunc(stream);
	TestMemLeak(integer);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "1844674407370955161801");

	typeValueRef* rangeVal = RangeRef(
		RangeValue(
			IntegerValue(enNumberTypeNegative, Integer(1, 1, 7)),
			IntInfinity(),
			true
		)
	);
	TestMemLeak(rangeVal);
	bytes = stream->sendFunc(stream, rangeVal);
	TestIntsEqual(bytes, 13);
	TestNull(stream->error);
	received = stream->fetchFunc(stream);
	TestMemLeak(integer);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "-7...infinity");

	// Try sending NULL
	bytes = stream->sendFunc(stream, NULL);
	TestIntsEqual(bytes, 0);
	TestNotNull(stream->error);
	TestNull(stream->resource);

	// Try sending a value that can't be converted to a string
	typeValueRef* listVal = ListRef(List(0, 0));
	TestMemLeak(listVal);
	bytes = stream->sendFunc(stream, listVal);
	TestIntsEqual(bytes, 0);
	TestNotNull(stream->error);
	received = stream->fetchFunc(stream);
	TestMemLeak(received);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "");
	TestNotNull(stream->error);

	typeValueRef* binaryVal = BinaryRef(MakeBinary(2, 2, 0xff, 0xfe));
	TestMemLeak(binaryVal);
	bytes = stream->sendFunc(stream, binaryVal);
	TestIntsEqual(bytes, 0);
	TestNotNull(stream->error);
	received = stream->fetchFunc(stream);
	TestMemLeak(received);
	TestIntsEqual(received->type, enValueRefTypeString);
	stringVal = received->value;
	TestStringsEqual(stringVal->string->data, "");
	TestNotNull(stream->error);

	FreeMem();

	streamDef->cleanupFunc(streamDef);
	FreeMem();
}
