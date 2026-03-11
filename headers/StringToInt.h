/**
 * StringToInt
 * Converts a string to an integer value. This function supports
 * integer prefixes for different integer bases as follows:
 *
 * 0b - interprets the string as a binary integer
 * 0o - interprets the string as an octal integer
 * 0d - interprets the string as a decimal integer
 * 0x - interprets the string as a hexadecimal integer
 *
 * The function converts character by character until the end of the string
 * is reached or it runs into a non numeric character in which case
 * the conversion stops and the value up to that point is returned.
 *
 * Example:  "1234Hello" - returns 1234 and "hello" returns 0
 *
 * @param string  A pointer to a typeData string to convert to an integer
 * @param fromPos A zero based byte offset to start the conversion from
 * @return        A pointer to an integer value that contains the conversion result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/6/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringToInt_Header_DEF
#define StringToInt_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* StringToInt(typeData* string, intmax_t fromPos);

#endif
