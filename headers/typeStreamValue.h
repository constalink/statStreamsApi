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

} typeStreamValue;

#endif
