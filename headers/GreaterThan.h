/**
 * GreaterThan
 * Compares two numbers and tells if value1 is greater than value2
 *
 * This function expects that value1 and value2 to be numbers. They should
 * both be either integers or fractions. They don't need to be the same type
 * one can be an integer and the other can be a fraction. If value1 and
 * value2 are not both numbers, then negative 1 (-1) is returned.
 *
 * If value1 is greater than value2 then 1 is returned
 * If value1 is equal to or less than value2, then 0 is returned
 *
 * @param value1 A pointer to the first number to compare
 * @param value2 A pointer to the second number to compare
 * @return       1 if value1 is greater than value2, 0 if not
 *               and -1 if either value1 or value2 are non numbers
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef GreaterThan_Header_DEF
#define GreaterThan_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int8_t GreaterThan(typeValueRef* value1, typeValueRef* value2);

#endif
