/**
 * AddIntegersInPlace
 * Adds 2 64bit integer arrays in place and returns true if the final
 * addition needs to carry in order to complete.
 *
 * NOTE: If this function returns true, then the result ran out
 * of space and the operation didn't complete
 *
 * NOTE: this function modifies the first 64bit array in place.
 * It is not thread safe and has side effects. By not thread safe
 * this means that the first integer array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * IMPORTANT: You must make sure that the first 64bit array has
 * enough space to contain the result properly or bits will be lost.
 * It should have at least 1 bit more than the largest of the 2 arrays
 *
 * @param intWords A pointer to the initial 64 bit word array. This gets modified in place
 * @param intLen   The number of 64-bit words in the intWords array
 * @param addWords A pointer to a 64 bit word array to add to intWords
 * @param addLen   The number of 64-bit words in the addWords array
 * @return         false if completed property or true if there wasn't enough space to complete the operation
 *                 After the operation, intWords will contain the results
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/7/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddIntegersInPlace_Header_DEF
#define AddIntegersInPlace_Header_DEF

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
typeBool AddIntegersInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* addWords,
	intmax_t addLen
);

#endif
