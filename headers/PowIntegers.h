/**
 * PowIntegers
 * Calculates an integer to a power
 *
 * @param integer A pointer to an integer value
 * @param power   The power to take the integer value to
 * @return        A pointer to an integer that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PowIntegers_Header_DEF
#define PowIntegers_Header_DEF

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
typeInteger* PowIntegers(typeInteger* integer, uint64_t power);

#endif
