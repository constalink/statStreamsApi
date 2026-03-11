/**
 * ConvertRangeToString
 * Converts a range value to a string and returns a string representation of that
 * range using the base that's passed in.
 *
 * The return value will have a prefix if the base isn't enIntBaseDecimal as follows:
 * For enIntBaseBinary - 0b
 * For enIntBaseOctal  - 0o
 * For enIntBaseHex    - 0x
 *
 * This function also handles open ended ranges, that is, ranges that start or end
 * with infinity or negative infinity.
 *
 * The return value will be a typeValueRef value with the type property set to
 * enValueRefTypeString and the value set to a typeStringValue value that contains
 * the string representation of the range.
 *
 * @param range A pointer to the range value to convert
 * @param base  A numerical base to use for the conversion
 * @return      A pointer to the string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertRangeToString_Header_DEF
#define ConvertRangeToString_Header_DEF

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
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertRangeToString(typeRangeValue* range, enIntBase base);

#endif
