/**
 * StringRangeCharLength
 * Returns the utf8 character length of a range in a string. This function
 * starts counting characters at a given zero based byte start index taking into account
 * multi-byte characters and counting them as a single character and end counting
 * when it hits the zero based byte end index
 *
 * @param string   A pointer to a typeData value to get the character length of
 * @param startPos The zero based byte index to start from
 * @param endPos   The zero based byte index to end at. The character at the end index is not counted
 * @return         The character length of the range within the string
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/9/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringRangeCharLength_Header_DEF
#define StringRangeCharLength_Header_DEF

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
intmax_t StringRangeCharLength(typeData* string, intmax_t startPos, intmax_t endPos);

#endif
