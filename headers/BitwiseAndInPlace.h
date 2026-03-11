/**
 * BitwiseAndInPlace
 * Calculates a bitwise AND operation in place
 *
 * NOTE: this function modifies the first integer array in place,
 * is not thread safe, and has side effects. By not thread safe
 * this means that the first integer array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * @param intWords A pointer to a 64 bit word array to perform the operation on
 *                 This value is modified in place
 * @param intLen   The number of 64 bit words in the intWords array
 * @param andWords A pointer to a 64 bit word array to AND intWords with
 * @param andLen   The number of 64 bit words in the andWords array
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/7/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BitwiseAndInPlace_Header_DEF
#define BitwiseAndInPlace_Header_DEF

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
void BitwiseAndInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* andWords,
	intmax_t andLen
);

#endif
