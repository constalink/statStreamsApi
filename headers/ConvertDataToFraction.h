/**
 * ConvertDataToFraction
 * Converts a string to a fraction value
 *
 * If the string argument that's passed in contains characters that can be interpreted
 * as a valid fraction, then the fraction value is returned otherwise an empty reference is returned.
 *
 * This function takes a look at the characters in the string that's passed in and
 * determines whether or not it can be interpreted as a fraction. It checks for common
 * patterns that make up a fraction and it's pretty robust as far as what constitutes
 * a valid fraction. It loosely looks for these regular expressions
 *
 * ^-?[0-9]+ [0-9]+/[0-9]+$
 * ^-?[0-9]+\.[0-9]+$
 *
 * It can also handle different number bases such as these and their floating point equivalents
 * Binary:      ^-?0b[0-1]+ [0-1]+/[0-1]+$
 * Octal:       ^-?0o[0-7]+ [0-7]+/[0-7]+$
 * Decimal:     ^-?0d[0-9]+ [0-9]+/[0-9]+$
 * Hexadecimal: ^-?0x[0-9a-fA-F]+ [0-9a-fA-F]+/[0-9a-fA-F]+$
 *
 * This function also handles "infinity" and "-infinity" properly. In this case, it returns
 * an infinity / negative infinity fraction value
 *
 * If successful, the return value will be a typeValueRef value with the type
 * property set to enValueRefTypeFraction and the value property set to a typeFractionValue value
 * pointer that contains the interpreted fraction value
 *
 * If the string can't be interpreted as a fraction, then an empty reference is returned.
 * This is different from an empty string or a zero fraction value. Rather, it'll be a
 * typeValueRef value where the type property is set to enValueRefTypeEmpty and the value property
 * is set to NULL
 *
 * @param string A pointer to the string to convert
 * @return       A pointer to the fraction value or empty reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertDataToFraction_Header_DEF
#define ConvertDataToFraction_Header_DEF

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
typeValueRef* ConvertDataToFraction(typeData* string);

#endif
