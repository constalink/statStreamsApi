/**
 * KaratsubaMultInPlace
 * Uses the Karatsuba method to multiply two integer values
 *
 * IMPORTANT: Don't use this function if you can help it.
 * This function is so much slower than the normal MultiplyIntegersInPlace
 * function. Even though this function is supposed to be faster, it's
 * not because of the constant overhead of the recursive calling
 *
 * Benchmarks for multiplying 2 4096 bit integers 1 million times
 * MultiplyIntegersInPlace: 18 seconds
 * KaratsubaMultInPlace: 3 minutes 22 seconds
 *
 * This is a lower level version of the KaratsubaMult function
 * This function modifies the resWords array in place
 *
 * @param intWords   A pointer to a 64 bit word array for the first integer value
 * @param intLen     The number of 64 bit words in the intWords array
 * @param timesWords A pointer to a 64 bit word array for the 2nd integer value
 * @param timesLen   The number of 64 bit words in the timesWords array
 * @param resWords   A pointer to a 64 bit word array where the result should be stored
 *                   The length of this array should be intLen + timesLen to make
 *                   make sure there is enough space to store the result. If this
 *                   array is shorter than it needs to be, you might get segmentation faults
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/20/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef KaratsubaMultInPlace_Header_DEF
#define KaratsubaMultInPlace_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void KaratsubaMultInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* timesWords,
	intmax_t timesLen,

	// Pointer where the result will be stored
	// The length should be intLen + timesLen
	uint64_t* resWords
);

#endif
