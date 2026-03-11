/**
 * ShiftInteger
 * Performs a bitwise shift operation on an integer value
 * This function doesn't modify the integer that's passed in but rather,
 * it creates a brand new typeInteger value to store the result in
 *
 * If "left" is true, then a left shift will be performed. And because of that
 * bits will not be lost if the value goes over 64 bits. Integer values have
 * no limit to the number of bits that it can handle other than the physical
 * limitations of the computer itself. If "left" is false, then a right shift
 * will be performed which will discard bits as they fall of the right side
 * of the integer
 *
 * @param integer A pointer to an integer value to perform the bitwise shift on
 * @param left    true to perform a left shift or false to perform a right shift
 * @param bits    The number of bits to shift.
 * @return        A pointer to an integer value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ShiftInteger_Header_DEF
#define ShiftInteger_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* ShiftInteger(typeInteger* integer, typeBool left, intmax_t bits);

#endif
