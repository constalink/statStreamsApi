/**
 * StringToDataInt
 * Converts a string to a typeData value that represents the value of the integer.
 * This function does the opposite of the DataIntToString function
 *
 * If string is "1122378244" then the return value will be: 4 bytes long
 * and contain "\x42\xE6\x22\x04"
 *
 * This function also handles integer prefixes as follows. If the string begins with:
 * - 0b then the string is interpreted as a binary string
 * - 0o then the string is interpreted as an octal string
 * - 0d then the string is interpreted as a decimal string
 * - 0x then the string is interpreted as a hexadecimal string
 *
 * @param string  A pointer to the typeData value that holds the string to convert
 * @param fromPos A zero based offset within "string" where the integer value starts
 *                Negative offsets are not accepted and result in undefined behavior
 * @return        A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringToDataInt_Header_DEF
#define StringToDataInt_Header_DEF

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
typeData* StringToDataInt(typeData* string, intmax_t fromPos);

#endif
