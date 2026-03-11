/**
 * RotateLeft16
 * Rotates the bits of a 16 bit integer left.
 * In other words, it shifts left, then the bits that are shifted off, get added on the right
 *
 * Example: Assuming num is [0010 1100] - This is simplified to a single byte to show how it works
 * RotateLeft16(num, 1) results in [0101 1000]
 * RotateLeft16(num, 2) results in [1011 0000]
 * RotateLeft16(num, 3) results in [0110 0001]
 * RotateLeft16(num, 4) results in [1100 0010]
 * etc...
 *
 * @param num    The 16 bit integer to perform the bit rotation on
 * @param places The number of places to rotate left
 * @result       The result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RotateLeft16_Header_DEF
#define RotateLeft16_Header_DEF

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
uint16_t RotateLeft16(uint16_t num, intmax_t places);

#endif
