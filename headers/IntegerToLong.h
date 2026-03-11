/**
 * IntegerToLong
 * Converts a typeInteger value into an unsigned 64 bit integer.
 * If the integer is larger than what will fit into 64 bits, then
 * the max value is returned which is 0xffffffffffffffff
 * This function performs the opposite operation of LongToInteger
 *
 * @param intVal The integer value to convert
 * @return       The unsigned 64 bit value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerToLong_Header_DEF
#define IntegerToLong_Header_DEF

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
uint64_t IntegerToLong(typeInteger* intVal);

#endif
