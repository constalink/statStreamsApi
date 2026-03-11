/**
 * ConvertDataToRange
 * Converts a string to a range value
 *
 * If the string argument that's passed in contains characters that can be interpreted
 * as a valid range, then the range value is returned otherwise an empty reference is returned.
 *
 * This function takes a look at the characters in the string that's passed in and
 * determines whether or not it can be interpreted as a range. It checks for common
 * patterns that make up a range and it's pretty robust as far as what constitutes
 * a valid range. It loosely looks for this regular expressions
 *
 * $-?[0-9]+\.\.\.?-?[0-9]+$
 *
 * It can also handle different number bases such as these
 * Binary:      ^-?0b[0-1]+\.\.\.?-?0b[0-1]+$
 * Octal:       ^-?0o[0-7]+\.\.\.?-?0o[0-7]+$
 * Decimal:     ^-?0d[0-9]+\.\.\.?-?0d[0-9]+$
 * Hexadecimal: ^-?0x[0-9a-fA-F]+\.\.\.?-?0x[0-9a-fA-F]+$
 *
 * This function also handles "infinity" and "-infinity" as the end of the range. In this case, it returns
 * a range that never ends
 *
 * If successful, the return value will be a typeValueRef value with the type
 * property set to enValueRefTypeRange and the value property set to a typeRangeValue value
 * pointer that contains the interpreted range value
 *
 * If the string can't be interpreted as a range, then an empty reference is returned.
 * This is different from an empty string or a zero length range value. Rather, it'll be a
 * typeValueRef value where the type property is set to enValueRefTypeEmpty and the value property
 * is set to NULL
 *
 * @param string A pointer to the string to convert
 * @return       A pointer to the range value or empty reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/11/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertDataToRange_Header_DEF
#define ConvertDataToRange_Header_DEF

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
typeValueRef* ConvertDataToRange(typeData* string);

#endif
