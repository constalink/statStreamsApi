/**
 * StringCharLength
 * Returns the utf8 character length of a string
 *
 * This function takes a string and calculates the character length of that string
 * taking into account multi-byte characters and counting them as a single character
 *
 * Example:
 * // This will be 17 even though the byte length is 18 as the π character is 2 bytes long
 * intmax_t charLen = StringCharLength(String("Have a piece of π"));
 *
 * @param string The string to get the character length of
 * @return       The character length of the string
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/11/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringCharLength_Header_DEF
#define StringCharLength_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
intmax_t StringCharLength(typeData* string);

#endif
