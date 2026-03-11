/**
 * ReverseByteOrder
 * Reverses the byte order for an unsigned long
 * This function does not modify the original integer, rather it
 * creates a new integer and copies the bytes into it in reverse order
 *
 * @param value The integer value to reverse
 * @return      An integer with the byte order reversed
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseByteOrder_Header_DEF
#define ReverseByteOrder_Header_DEF

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
uint64_t ReverseByteOrder(uint64_t value);

#endif
