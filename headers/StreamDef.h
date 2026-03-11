/**
 * StreamDef
 * Creates a typeStreamDef value and returns a pointer to it
 *
 * This function allocates a new typeStreamDef value and tracks it
 * on the current memory stack.
 *
 * This function expects a streamId argument that follows these rules:
 * - It must be unique. It can't match any other stream ids
 * - It can't be a zero length string. It must contain at least 1 letter
 * - It must start with a lower case letter
 * - It must contain only letters (lower or upper case) and numbers. No other characters are allowed
 *
 * This function expects a streamType argument that is a non optional stream
 * data type. You can use the StreamType() function for this argument.
 *
 * The documentation argument can be NULL if there is no documentation.
 * If provided, it should be a markdown formatted string.
 *
 * @param initFunc      A pointer to an initialization function. This gets called the first time a
 *                      stream is referenced. You can pass NULL if no initialization is required
 * @param createFunc    A pointer to a function that creates and returns new stream values. (Required)
 *                      This gets called every time an open stream expression is executed
 * @param cleanupFunc   A pointer to a cleanup function. This gets called when the program exits
 *                      You can pass NULL if no cleanup is required
 * @param streamId      A pointer to the stream id. It must follow the rules outlined above
 * @param streamType    A pointer to the stream data type. It must be a stream type that is non optional
 * @param documentation A markdown formatted string that is used as documentation in IDEs.
 *                      This can be NULL if there is no documentation for the stream
 * @return              A pointer to the stream definition value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/2/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StreamDef_Header_DEF
#define StreamDef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeType.h"
#include "typeStreamDef.h"
#include "typeInitStreamFunc.h"
#include "typeCreateStreamFunc.h"
#include "typeCleanupStreamFunc.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeStreamDef* StreamDef(
	typeInitStreamFunc* initFunc,
	typeCreateStreamFunc* createFunc,
	typeCleanupStreamFunc* cleanupFunc,

	// Expected to be unique, non empty, start with a lower case letter,
	// and only contain letters and numbers. No other characters
	typeData* streamId,

	// Expected to be non optional stream data type
	typeType* streamType,
	typeData* documentation
);

#endif
