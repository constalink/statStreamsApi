/**
 * CompareNumbers
 * Compares numbers.
 *
 * You should pass in integer values or fraction values.
 * Any other value type will return -2
 *
 * This function handles infinity values as well as negative numbers
 *
 * 1 -  The first value is greater
 * 0 -  The two values are equal
 * -1 - The second value is greater
 * -2 - The two values are not comparable
 *
 * @param num1 The first number to compare
 * @param num2 The second number to compare
 * @return     The result of the comparison
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CompareNumbers_Header_DEF
#define CompareNumbers_Header_DEF

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
int8_t CompareNumbers(typeValueRef* num1, typeValueRef* num2);

#endif
