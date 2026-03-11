/**
 * CharLength
 * Returns the character length at a given string position for a typeData value.
 * This takes into account multi-byte UTF8 characters so that if the character
 * at the given index takes up multiple bytes, then the number of bytes that
 * the character takes up is returned.
 *
 * @param string The typeData value to get the character length of
 * @param index  The zero based byte index to get the character length from
 * @return       The number of bytes that the character at the given index takes up
 *               This will always be 1, 2, 3, or 4
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/28/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CharLength_Header_DEF
#define CharLength_Header_DEF

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
int8_t CharLength(typeData* string, intmax_t index);

#endif
