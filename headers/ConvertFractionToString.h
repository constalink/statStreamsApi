/**
 * ConvertFractionToString
 * Converts a fraction value to a string
 *
 * This function takes a fraction value and returns a string representation of that
 * fraction using the base that's passed in. If the fraction has a zero numerator
 * then just the integer portion of the fraction is returned. Otherwise, the return
 * string will look like this (using an example if 3 and 2 thirds)
 *
 * 3 2/3
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
 * the string representation of the fraction
 *
 * @param fraction A pointer to the fraction to convert
 * @param base     The numerical base to use for the conversion
 * @return         A pointer to the string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertFractionToString_Header_DEF
#define ConvertFractionToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertFractionToString(typeFractionValue* fraction, enIntBase base);

#endif
