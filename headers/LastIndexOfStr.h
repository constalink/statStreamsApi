/**
 * LastIndexOfStr
 * Finds the last position of a string in another string. If it isn't found, then -1 is returned
 * This is a lower level version of the LastIndexOf function.
 *
 * This function starts searching from the offset and searches backward until the
 * search value is found or it reaches the start of the value.
 *
 * NOTE: Even though the name of this function suggests that it only supports string searching
 * it actually supports both strings and binary data that may include null bytes.
 *
 * @param string    A pointer to a uint8_t array of bytes to search in
 * @param strLen    The byte length of the "string" array
 * @param search    A pointer to a uint8_t array of bytes to search for
 * @param searchLen The byte length of the "search" array
 * @param offset    The zero based byte offset to start searching backward from. Negative indexes are supported
 * @return          The zero based byte index where "search" is found or -1 if it isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/7/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LastIndexOfStr_Header_DEF
#define LastIndexOfStr_Header_DEF

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
intmax_t LastIndexOfStr(
	uint8_t* string,
	intmax_t strLen,
	uint8_t* search,
	intmax_t searchLen,

	// This is the offset of where to start searching backward from
	// If you pass zero, then no search will be performed because there is
	// nothing to search if we are searching backward from the beginning
	// of the string. Negative indexes are supported for specifying an
	// index from the end.If you pass -1 then search will start backward from
	// the end of the string and the entire string will be searched
	intmax_t offset
);

#endif
