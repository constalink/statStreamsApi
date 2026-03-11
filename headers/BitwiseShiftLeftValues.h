/**
 * BitwiseShiftLeftValues
 * Bitwise shift left values
 * This function performs a bitwise left shift operation on an integer value. It handles
 * infinities and negative values as well. It also doesn't modify the original value
 * but rather, it creates a new value to store the result in.
 *
 * - If the value is infinity and you want to shift left by negative infinity, zero is returned
 * - If the value is zero, then zero is returned
 * - If the value is infinity or negative infinity, then the original value is returned
 * - If the value is positive and the bits is infinity, then infinity is returned
 * - If the value is negative and the bits is infinity, then negative infinity is returned
 * - If the bits is negative infinity, then zero is returned
 * - If the bits is zero, then the original value is returned
 * - If the bits is negative, then a right shift is performed (Shifting left -5 bits is equivalent to shifting right 5 bits)
 *
 * Shifting left doesn't discard bits if the value goes over 64 bits. Integer values have no limit
 * to the number of bits it can handle other than the physical limitations of the computer itself.
 *
 * @param value1 The value to perform the left shift on
 * @param bits   The number of bits to shift left. If it's negative, a right shift is performed
 * @return       The new integer result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitwiseShiftLeftValues_Header_DEF
#define BitwiseShiftLeftValues_Header_DEF

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
typeIntegerValue* BitwiseShiftLeftValues(
	typeIntegerValue* value1,
	typeIntegerValue* bits
);

#endif
