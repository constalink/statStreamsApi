/**
 * ConvertIntToBool
 * Converts an integer value to a boolean value.
 *
 * This function doesn't just convert any integer to a boolean. What it does is
 * convert a zero integer to false and a 1 integer to true. If the integer is any
 * other value, then the empty reference is returned instead.
 *
 * If the integer value isn't either 0 or 1, then an empty reference is returned.
 * This is different from a zero integer or a false boolean value. Rather, it'll be
 * a typeValueRef value where the type property is set to enValueRefTypeEmpty and the
 * value property is set to NULL
 *
 * If the integer value is 0 or 1, then the return value will be a typeValueRef value
 * with the type property set to enValueRefTypeBool and the value property set to a
 * typeBoolValue value pointer that contains the boolean value
 *
 * @param intValue A pointer to the integer value to convert
 * @return         A pointer to the boolean value or an empty reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertIntToBool_Header_DEF
#define ConvertIntToBool_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertIntToBool(typeIntegerValue* intValue);

#endif
