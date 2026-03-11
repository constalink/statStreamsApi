/**
 * StartsWithStr
 * Whether or not a uint8_t* starts with another uint8_t*
 * This is a lower level version of the StartsWith function
 *
 * NOTE: Even though the name of this function suggests that it only supports string values
 * it actually supports both strings and binary data that may include null bytes.
 *
 * @param string        A pointer to a uint8_t array of bytes compare against
 * @param strLen        The byte length of the "string" array
 * @param startsWith    A pointer to a prefix uint8_t array of bytes to compare against
 * @param startsWithLen The byte length of the "startsWith" array
 * @param offset        The zero based byte offset to start searching from. Negative indexes are supported
 * @return              true if "string" starts with "startsWith" at the given offset or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StartsWithStr_Header_DEF
#define StartsWithStr_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool StartsWithStr(
	uint8_t* string,
	intmax_t strLen,
	uint8_t* startsWith,
	intmax_t startsWithLen,
	intmax_t offset
);

#endif
