/**
 * SetStreamError
 * Sets a stream error value.
 *
 * This function takes a pointer to an error message and sets
 * it as the stream->error property. It also takes
 * care of elevating the error message to be tracked on the
 * same memory stack as the streamValue itself and frees the
 * old error message if it exists and there are no other
 * references to it.
 *
 * If you pass NULL as the error argument, then the previous
 * error message is cleared and freed if there are no other
 * references to it.
 *
 * IMPORTANT: This function will attempt to free the previous error if
 * there are no other references to it
 *
 * @param stream A pointer to the stream to set the error message for
 * @param error  A pointer to the message to set as the error or
 *               NULL if you want to clear the error message
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetStreamError_Header_DEF
#define SetStreamError_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeStreamValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void SetStreamError(typeStreamValue* stream, typeData* error);

#endif
