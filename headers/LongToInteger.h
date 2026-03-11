/**
 * LongToInteger
 * Converts an unsigned 64 bit integer to a typeInteger value
 * This function creates a new typeInteger value and tracks it on the current
 * memory stack. This function performs the opposite operation of IntegerToLong
 *
 * @param value The unsigned 64 bit integer to convert
 * @return      A pointer to the resultant integer value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LongToInteger_Header_DEF
#define LongToInteger_Header_DEF

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
typeInteger* LongToInteger(uint64_t value);

#endif
