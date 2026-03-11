/**
 * ReverseBitOrder
 * Reverses the bit order of a 64 bit integer and returns the result
 *
 * @param integer An unsigned 64 bit integer to reverse the bit order of
 * @return        The result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseBitOrder_Header_DEF
#define ReverseBitOrder_Header_DEF

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
uint64_t ReverseBitOrder(uint64_t integer);

#endif
