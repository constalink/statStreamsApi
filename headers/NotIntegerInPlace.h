/**
 * NotIntegerInPlace
 * Inverts a 64bit integer array in place. This function converts 1 bits to zero
 * and zero bits to 1s
 *
 * NOTE: this function modifies the 64bit integer array in place.
 * It is not thread safe and has side effects. By not thread safe
 * this means that the integer array (the one being modified)
 * cannot be read or written on another thread while this operation is in progress.
 *
 * @param intWords A pointer to a 64 bit word array to invert bits for
 * @param intLen   The number of 64 bit words in the intWords array
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NotIntegerInPlace_Header_DEF
#define NotIntegerInPlace_Header_DEF

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
void NotIntegerInPlace(uint64_t* intWords, intmax_t intLen);

#endif
