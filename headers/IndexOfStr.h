/**
 * IndexOfStr
 * Finds the position of a uint8_t* in another uint8_t*. If it isn't found, then -1 is returned
 * This is a lower level version of the IndexOf function.
 *
 * NOTE: Even though the name of this function suggests that it only supports string searching
 * it actually supports both strings and binary data that may include null bytes.
 *
 * @param string    A pointer to a uint8_t array of bytes to search in
 * @param strLen    The byte length of the "string" array
 * @param search    A pointer to a uint8_t array of bytes to search for
 * @param searchLen The byte length of the "search" array
 * @param offset    The zero based byte offset to start searching from. Negative indexes are supported
 * @return          The zero based byte index where "search" is found or -1 if it isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexOfStr_Header_DEF
#define IndexOfStr_Header_DEF

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
intmax_t IndexOfStr(
	uint8_t* string,
	intmax_t strLen,
	uint8_t* search,
	intmax_t searchLen,
	intmax_t offset
);

#endif
