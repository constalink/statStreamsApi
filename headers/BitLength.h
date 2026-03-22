/**
 * BitLength
 * Returns the position of the most significant bit in an integer
 *
 * This function looks at every bit in an integer starting from the most significant bit
 * and returns the position of the first bit that's set to 1.
 *
 * For example: If we pass 256889, then the return value will be 18 because 256889 is
 * 111110101101111001 in binary - That's 18 bits
 *
 * If the "integer" argument is zero, then the return value will also be zero
 * since zero has no bits set.
 *
 * @param integer A pointer to the integer to get the bit length of
 * @return        The bit index of the most significant bit
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/15/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitLength_Header_DEF
#define BitLength_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
uint64_t BitLength(typeInteger* integer);

#endif
