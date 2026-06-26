/**
 * typeStreamValue
 * A stream value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStreamValue_DEF
#define typeStreamValue_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValue.h"
#include "typeFreeFunc.h"
#include "typeData.h"
#include "typeBuffer.h"
#include "typeType.h"
#include "typeStreamOpenFunc.h"
#include "typeStreamCloseFunc.h"
#include "typeStreamSendFunc.h"
#include "typeStreamFetchFunc.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamValue {
	VALUEMEMBERS;

	// Free function
	typeFreeFunc* freeFunc;

	// Not tracked functions
	typeStreamOpenFunc* openFunc;
	typeStreamCloseFunc* closeFunc;
	typeStreamSendFunc* sendFunc;
	typeStreamFetchFunc* fetchFunc;

	// Value properties
	typeData* streamId;
	typeData* uri;
	typeValueRef* params;
	typeData* error;
	typeBuffer* buffer;

	// This should be a stream data type and is
	// used to determine what the input and output
	// data types are for the stream.
	typeType* streamType;

	// A pointer for the resource. It set, this MUST be
	// a typeValue* based pointer or you'll get memory errors
	void* resource;

	// Whether or not the stream is open
	typeBool opened;

	// The number of read operations that have been performed on the stream
	uint64_t reads;

	// The number of write operations that have been performed on the stream
	uint64_t writes;

	// The count of data sent to the stream. The units are stream specific
	uint64_t sent;

} typeStreamValue;

#endif
