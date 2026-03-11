/**
 * StreamValue
 * Creates a new typeStreamValue value and returns a pointer to it
 *
 * This function allocates a new typeStreamValue value and tracks it on the
 * current memory stack
 *
 * NOTE: Normally, you'd only call this function from the CreateStream function in
 * your plugin and the values you pass into it are mostly provided to you from the stream definition
 *
 * Even though the resource argument signature is written with a void* pointer,
 * it expects a typeValue based pointer. The reason it's written with a void* is so that
 * any value that is derived from the typeValue typedef can be passed in without a type cast.
 * You must take care to pass in a supported typeValue based pointer or you'll most likely
 * end up with buffer overflows or segmentation faults.
 *
 * @param streamId   A pointer to the stream id. This is the identifier that's used to open the stream
 * @param uri        A pointer to the uri of the stream. This should start with: "streamId://" where streamId matches the streamId passed in
 * @param params     A pointer to the parameters that are passed in when an open stream call is executed
 * @param bufferSize If greater than 0, then a buffer of this size will be created and stored in steamValue->buffer
 *                   The buffer will not have it's bytes initialized. You must initialize these bytes or write to the buffer before reading from it
 * @param streamType The stream type. This should be a enTypeStream data type. (Take a look at the StreamType function)
 * @param resource   The resource for the stream if any. If NULL, then no resource will be set initially
 *                   If provided, this is expected to be a typeValue based pointer
 *                   (Note: You can always set a resource later with the SetStreamResource function)
 * @param openFunc   A pointer to a function that's called when the stream is opened
 * @param closeFunc  A pointer to a function that's called when the stream is closed
 * @param sendFunc   A pointer to a function that's called when a value is sent to the stream
 * @param fetchFunc  A pointer to a function that's called when a read operation is performed on the stream
 * @return           A pointer to the new stream value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StreamValue_Header_DEF
#define StreamValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeType.h"
#include "typeStreamValue.h"
#include "typeStreamOpenFunc.h"
#include "typeStreamCloseFunc.h"
#include "typeStreamSendFunc.h"
#include "typeStreamFetchFunc.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeStreamValue* StreamValue(
	typeData* streamId,
	typeData* uri,
	typeValueRef* params,
	intmax_t bufferSize,
	typeType* streamType,
	void* resource,
	typeStreamOpenFunc* openFunc,
	typeStreamCloseFunc* closeFunc,
	typeStreamSendFunc* sendFunc,
	typeStreamFetchFunc* fetchFunc
);

#endif
