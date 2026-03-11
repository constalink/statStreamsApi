/**
 * ConvertIntToString
 * Converts an integer value to a string
 *
 * This function takes an integer value and returns a string representation of that
 * integer using the base that's passed in.
 *
 * The return value will have a prefix if the base isn't enIntBaseDecimal as follows:
 * For enIntBaseBinary - 0b
 * For enIntBaseOctal  - 0o
 * For enIntBaseHex    - 0x
 *
 * This function also handles infinity and negative infinity. In this case, it'll
 * return "infinity" or "-infinity"
 *
 * The return value will be a typeValueRef value with the type property set to
 * enValueRefTypeString and the value set to a typeStringValue value that contains
 * the string representation of the integer
 *
 * @param intValue A pointer to the integer to convert
 * @param base     The numerical base to use for the conversion
 * @return         A pointer to the string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertIntToString_Header_DEF
#define ConvertIntToString_Header_DEF

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
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertIntToString(typeIntegerValue* intValue, enIntBase base);

#endif
