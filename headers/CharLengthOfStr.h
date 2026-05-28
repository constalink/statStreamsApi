/**
 * CharLengthOfStr
 * Returns the character length at a given string position for a uint8_t array of bytes.
 * This takes into account multi-byte UTF8 characters so that if the character at the
 * given index takes up multiple bytes, then the number of bytes that the character takes
 * up is returned. This is a lower level version of the CharLength function.
 *
 * NOTE: Even though the name of this function suggests that it only supports string arrays
 * it actually supports both strings and binary data that may include null bytes.
 *
 * @param string    A pointer to a uint8_t array of bytes to check
 * @param stringLen The byte length of the "string" array
 * @param index     The zero based byte index to get the character length of.
 *                  Negative indexes are supported to indicate a number of bytes from the end.
 * @return          The number of bytes that the character at the given index takes up
 *                  This will always be 1, 2, 3, or 4
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CharLengthOfStr_Header_DEF
#define CharLengthOfStr_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t CharLengthOfStr(uint8_t* string, intmax_t stringLen, intmax_t index);

#endif
