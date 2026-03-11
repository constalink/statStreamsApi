/**
 * ConvertRangeToBinary
 * Converts a range value to a binary value
 *
 * This function takes a range value and returns a string representation of that range
 * The return value will be in base 10 (decimal)
 *
 * The return value will be a typeValueRef value with the type property set to
 * enValueRefTypeString and the value set to a typeStringValue value that contains
 * the string representation of the range
 *
 * @param intValue A pointer to the range to convert
 * @return         A pointer to the string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertRangeToBinary_Header_DEF
#define ConvertRangeToBinary_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeRangeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertRangeToBinary(typeRangeValue* range);

#endif
