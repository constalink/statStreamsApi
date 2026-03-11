/**
 * ShiftIntegerInPlace
 * Performs a bitwise shift operation on a 64 bit integer array in place
 *
 * NOTE: this function modifies the 64bit integer array in place.
 * It is not thread safe and has side effects. By not thread safe
 * this means that the intWords array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * If "left" is true, then a left shift will be performed and if "left" is
 * false, then a right shift will be performed. Either operation has the
 * potential to lose bits as this operation discards bits if they fall
 * off the right or left side of the intWords array
 *
 * @param intWords A pointer to a 64 bit word array to perform the bit shift on
 *                 This array is modified in place
 * @param intLen   The number of 64 bit words in the intWords array
 * @param left     true to perform a left shift or false to perform a right shift
 * @param bits     The number of bits to shift
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/7/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ShiftIntegerInPlace_Header_DEF
#define ShiftIntegerInPlace_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void ShiftIntegerInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	typeBool left,
	intmax_t bits
);

#endif
