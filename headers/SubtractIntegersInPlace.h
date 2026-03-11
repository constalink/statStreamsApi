/**
 * SubtractIntegersInPlace
 * Subtracts 2 integers in place and returns true if the final
 * subtraction needed to borrow in order to complete. This will
 * be true if you are subtracting a larger number from a smaller
 * number.
 *
 * This is a lower level version of the SubstractIntegers function
 *
 * NOTE: If this function returns true, then the result ran out
 * of space and the operation didn't complete
 *
 * NOTE: this function modifies the first integer array in place.
 * It is not thread safe and has side effects. By not thread safe
 * this means that the first integer array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * @param intWords   A pointer to a 64 bit word array to start with
 *                   This array gets modified in place
 * @param intLen     The number of 64 bit words in the intWords array
 * @param minusWords A pointer to a 64 bit word array to subtract
 * @param minusLen   The number of 64 bit words in the minusWords array
 * @return           true if the result couldn't be completed or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SubtractIntegersInPlace_Header_DEF
#define SubtractIntegersInPlace_Header_DEF

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
typeBool SubtractIntegersInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* minusWords,
	intmax_t minusLen
);

#endif
