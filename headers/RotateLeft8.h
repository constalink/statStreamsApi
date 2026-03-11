/**
 * RotateLeft8
 * Rotates the bits of an 8 bit integer left.
 * In other words, it shifts left, then the bits that are shifted off, get added on the right
 *
 * Example: Assuming num is [0010 1100]
 * RotateLeft8(num, 1) results in [0101 1000]
 * RotateLeft8(num, 2) results in [1011 0000]
 * RotateLeft8(num, 3) results in [0110 0001]
 * RotateLeft8(num, 4) results in [1100 0010]
 * etc...
 *
 * @param num    The 8 bit integer to perform the bit rotation on
 * @param places The number of places to rotate left
 * @result       The result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RotateLeft8_Header_DEF
#define RotateLeft8_Header_DEF

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
uint8_t RotateLeft8(uint8_t num, intmax_t places);

#endif
