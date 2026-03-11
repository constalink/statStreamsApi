/**
 * DivideIntegersInPlace
 * Divides integer values in place
 *
 * This is a lower level version of the DivideIntegers function
 *
 * NOTE: This function modifies the quoWords and remWords values
 * in place. It is not thread safe and has side effects. By not thread
 * safe, this means that another thread cannot read or write to either
 * the quoWords or remWords arrays while this operation is in progress
 *
 * IMPORTANT: You'll need to make sure that the quoWords and remWords
 * arrays are initialized to all zeros and that they have enough
 * length to fully contain the results or you will get memory errors.
 * Both the quoWords and remWords arrays should be as long as the intWords
 * array. NOTE: Even though the remWords result will never end up
 * being longer than the length of divideByWords, you'll need make it
 * as long as the intWords array because it needs that length for
 * the calculation. Also, intWords and remWords can be the same
 * pointer. If that is the case, then intWords will be modified in
 * place and will hold the remainder after the calculation is finished
 *
 * @param intWords      A pointer to a 64 bit word array to use as the dividend or the number being divided
 * @param intLen        The number of 64 bit words in the intWords array
 * @param divideByWords A pointer to a 64 bit word array to use as the divisor or the number to divide by
 * @param divideByLen   The number of 64 bit words in the divideByWords array
 * @param quoWords      A pointer to a 64 bit word array where the quotient will be stored
 *                      You can pass NULL to ignore the quotient. If passed, it must be intLen + 1 words long
 *                      It passed, this array must be initialized to all zeros. This array is modified in place
 *                      After the operation, this array will contain the quotient result
 * @param remWords      A pointer to a 64 bit word array where the remainder will be stored
 *                      The length must be intLen + 1 words long and all words must be initialized to all zeros
 *                      After the operation, this array will contain the remainder result
 * @param tmpWords      A pointer to a 64 bit word array where temporary calculations will be stored
 *                      You can pass NULL and one will be created internally. If passed, it should
 *                      be divideByLen + 1 words long and should be initialized to all zeros
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DivideIntegersInPlace_Header_DEF
#define DivideIntegersInPlace_Header_DEF

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
void DivideIntegersInPlace(
	uint64_t* intWords,
	intmax_t intLen,
	uint64_t* divideByWords,
	intmax_t divideByLen,

	// Pointer where the quotient will be stored
	// The length should be intWords long (plus a terminating word)
	// You can also pass NULL and the quotient will be ignored
	uint64_t* quoWords,

	// Pointer where the remainder will be stored
	// The length should be intWords long (plus a terminating word)
	uint64_t* remWords,

	// A temporary buffer where calculations will be stored
	// temporarily during the calculation
	// The length should be divideByWords long (plus a terminating word)
	// You could also pass NULL and one will be created for you
	uint64_t* tmpWords
);

#endif
