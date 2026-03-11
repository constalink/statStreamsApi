/**
 * CopyIntegerInPlace
 * Copies a 64bit integer array to another one in place.
 *
 * This is a lower level version of the CopyInteger function
 *
 * NOTE: The second 64bit array is modified in place.
 * This function has side effects and is not thread safe. By not thread safe
 * this means that the 2nd integer value (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * If the 2 integers are the same length (that is int1Len == int2Len)
 * then the 64 bit words are copied as is, index to index.
 *
 * If int1Len and int2Len are different, then 64 bit words are copied
 * on an offset such that the 2 arrays line up on the right
 *
 * If int1Len is 2 and int2Len is 4
 * int1Words:  -   -  [0] [1]
 *                     |   |
 * int2Words: [0] [1] [2] [3]
 *
 * If int2Len is 4 and int2Len is 2
 * int1Words: [0] [1] [2] [3]
 *                     |   |
 * int2Words:         [0] [1]
 *
 * @param from    A pointer to a 64 bit word array to copy from
 * @param fromLen The number of 64 bit words in the from array
 * @param to      A pointer to a 64 bit word array to copy to
 * @param toLen   The number of 64 bit words in the to array
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyIntegerInPlace_Header_DEF
#define CopyIntegerInPlace_Header_DEF

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
void CopyIntegerInPlace(
	uint64_t* from,
	intmax_t fromLen,
	uint64_t* to,
	intmax_t toLen
);

#endif
