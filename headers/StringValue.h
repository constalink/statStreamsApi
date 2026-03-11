/**
 * StringValue
 * Creates a typeStringValue value and returns a pointer to it
 *
 * This function allocates a new typeStringValue value and tracks it on
 * the current memory stack.
 *
 * IMPORTANT: This function expects a pointer to a typeData value that only
 * contains valid UTF8 code points. You should take care to not pass a typeData
 * value that contains binary data or data that isn't UTF8 encoded. If you pass
 * in a value that doesn't meet this requirement, you may bet memory errors,
 * buffer overflows, or segmentation faults
 *
 * @param string A pointer to the underlying string that contains the UTF8 encoded data
 * @return       A pointer to the new typeStringValue value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/11/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringValue_Header_DEF
#define StringValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeStringValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeStringValue* StringValue(typeData* string);

#endif
