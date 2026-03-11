/**
 * typeStreamDef
 * A stream definition
 *
 * Stream definitions hold everything that a stream needs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/25/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStreamDef_DEF
#define typeStreamDef_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeBool.h"
#include "typeFreeFunc.h"
#include "typeData.h"
#include "typeType.h"
#include "typeInitStreamFunc.h"
#include "typeCreateStreamFunc.h"
#include "typeCleanupStreamFunc.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStreamDef {
	VALUEMEMBERS;

	// Free function. Takes care of cleaning up allocated memory when the definition is freed
	typeFreeFunc* freeFunc;

	// The initialization function. Called the first time a stream is referenced
	// which is usually the first time a stream is opened
	typeInitStreamFunc* initFunc;

	// The create function. Called every time an open stream statement is executed
	// This function takes care of creating new stream handles
	typeCreateStreamFunc* createFunc;

	// The cleanup function. Called when the program exits
	typeCleanupStreamFunc* cleanupFunc;

	// Holds the shared object. This is set automatically when a stream plugin is loaded
	// The stream definition needs to hold on to this value so that it can free it when
	// the stream definition is freed. You shouldn't need to do anything with this value
	void* sharedObject;

	// The stream id. Should be non empty, unique, start with a lower case letter
	// and should only contain letters and numbers.
	typeData* streamId;

	// The stream data type. Should be a stream typeType pointer that is non-optional
	typeType* streamType;

	// The stream documentation if any. If set, it should be a markdown formatted string
	typeData* documentation;

	// Whether or not the stream's initFunc has been called. The first time the stream
	// is referenced, the initFunc will be called and this will be set to true
	typeBool initialized;

} typeStreamDef;

#endif
