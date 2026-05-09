/**
 * StringRangeByteLength
 * Returns the raw byte length of a utf8 character range in a string. This function
 * starts counting bytes at a given zero based utf8 character start index taking into
 * account multi-byte characters counting them as multiple bytes, and ends counting
 * when it hits the zero based utf8 character end index
 *
 * @param string     A pointer to a typeData value that contains the range to count
 * @param charLength The utf8 character length of the string. You can get this by
 *                   calling the StringCharLength function on the string
 * @param startChar  The zero based utf8 character index to start from.
 * @param endChar    The zero based utf8 character index to end at. The character at
 *                   the end index is not counted
 * @return           The byte length of the range within the string
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/4/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringRangeByteLength_Header_DEF
#define StringRangeByteLength_Header_DEF

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
intmax_t StringRangeByteLength(
	typeData* string,
	intmax_t charLength,
	intmax_t startChar,
	intmax_t endChar
);

#endif
