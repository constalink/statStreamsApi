/**
 * MultiplyIntegersInPlace
 * Multiply two 64bit arrays in place.
 *
 * This is a lower level version of the MultiplyIntegers function
 *
 * NOTE: this function modifies the resWords 64bit array in place.
 * It is not thread safe and has side effects. By not thread safe
 * this means that the resWords integer array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * IMPORTANT: You must make sure that the resWords array is initialized
 * to all zeros and that it has enough space to contain the result
 * properly or you will get memory errors. To be safe, make sure
 * that resWords has intLen + timesLen 64 bit words available
 *
 * @param intWords   A pointer to a 64 bit word array to multiply
 * @param intLen     The number of 64 bit words in the intWords array
 * @param timesWords A pointer to a 2nd 64 bit word array to multiply
 * @param timesLen   The number of 64 bit words in the timesWords array
 * @param resWords   A pointer to 64 bit word array where the result should be stored
 * @param resLen     The number of 64 bit words in the resWords array. This should be
 *                   at least intLen + timesLen and all words should be initialized to zero
 * @return           If the operation completed, then zero is returned. Otherwise
 *                   this function returns the number to carry over to the next 64 bit word.
 *                   This function only returns a non zero value if the resWords array
 *                   isn't long enough to hold the full result product
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/7/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyIntegersInPlace_Header_DEF
#define MultiplyIntegersInPlace_Header_DEF

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
uint64_t MultiplyIntegersInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* timesWords,
	intmax_t timesLen,

	// Pointer where the result will be stored
	// The length should be intLen + timesLen
	uint64_t* resWords,
	intmax_t resLen
);

#endif
