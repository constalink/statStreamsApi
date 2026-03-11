/**
 * CompareIntegers
 * Compares integer values and returns
 * 1 if the first is greater,
 * -1 if the second is greater,
 * and 0 if they are equal
 *
 * @param int1 The first integer value to compare
 * @param int2 The second integer value to compare
 * @return     1 if int1 is greater, -1 if int2 is greater or 0 if they are equal
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/21/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareIntegers_Header_DEF
#define CompareIntegers_Header_DEF

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
int8_t CompareIntegers(typeInteger* int1, typeInteger* int2);

#endif
