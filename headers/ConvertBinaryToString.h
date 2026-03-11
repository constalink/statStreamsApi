/**
 * ConvertBinaryToString
 * Converts a binary value to a string value.
 *
 * This function performs a check to make sure that the binary value contains only
 * UTF8 encoded code points and if it find any data that isn't valid UTF8, it returns
 * an empty reference.
 *
 * If successful, the return value will be a typeValueRef value with the
 * type property set to enValueRefTypeString and the value property set to
 * a pointer to a typeStringValue that contains the binary value passed in.
 * It essentially returns this after it performs a UTF8 validity check
 *
 * return StringRef(StringValue(binary));
 *
 * IMPORTANT: This function does not do a byte copy operation or any byte data conversion.
 * It simply checks to make sure the passed in value is valid UTF8 and if so, it creates
 * a string value from it. If successful, then the return value will simply use the same
 * pointer to the typeData value passed in to create a string value from it.
 *
 * IMPORTANT: If invalid UTF8 is found in the binary argument, then an empty reference
 * is returned. This is different from an empty string. Rather, it'll return a
 * typeValueRef value where the type property is set to enValueRefTypeEmpty and the
 * value property is set to NULL
 *
 * @param binary A pointer to the binary value to convert
 * @return       Either a pointer to an empty reference or a pointer to a string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertBinaryToString_Header_DEF
#define ConvertBinaryToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertBinaryToString(typeData* binary);

#endif
