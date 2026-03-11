/**
 * RotateRight32
 * Rotates the bits of a 32 bit integer right.
 * In other words, it shifts right, then the bits that are shifted off, get added on the left
 *
 * Example: Assuming num is [0010 1100] - This is simplified to a single byte to show how it works
 * RotateRight32(num, 1) results in [0001 0110]
 * RotateRight32(num, 2) results in [0000 1011]
 * RotateRight32(num, 3) results in [1000 0101]
 * RotateRight32(num, 4) results in [1100 0010]
 * etc...
 *
 * @param num    The 32 bit integer to perform the bit rotation on
 * @param places The number of places to rotate right
 * @result       The result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RotateRight32_Header_DEF
#define RotateRight32_Header_DEF

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
uint32_t RotateRight32(uint32_t num, intmax_t places);

#endif
