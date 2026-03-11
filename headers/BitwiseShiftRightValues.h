/**
 * BitwiseShiftRightValues
 * Bitwise shift right values
 * This function performs a bitwise right shift operation on an integer value. It handles
 * infinities and negative values as well. It also doesn't modify the original value
 * but rather, it creates a new value to store the result in.
 *
 * - If the value is infinity and you want to shift right by infinity, zero is returned
 * - If the value is zero, then zero is returned
 * - If the value is infinity or negative infinity, then the original value is returned
 * - If the value is positive and the bits is negative infinity, then infinity is returned
 * - If the value is negative and the bits is negative infinity, then negative infinity is returned
 * - If the bits is infinity, then zero is returned
 * - If the bits is zero, then the original value is returned
 * - If the bits is negative, then a left shift is performed (Shifting right -5 bits is equivalent to shifting left 5 bits)
 *
 * Shifting right discards bits as it shifts right. If the right shift ends up with all 1 bits
 * being discarded, then zero is returned
 *
 * @param value1 The value to perform the right5 shift on
 * @param bits   The number of bits to shift right5. If it's negative, a left shift is performed
 * @return       The new integer result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitwiseShiftRightValues_Header_DEF
#define BitwiseShiftRightValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* BitwiseShiftRightValues(
	typeIntegerValue* value,
	typeIntegerValue* bits
);

#endif
