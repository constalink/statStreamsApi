/**
 * RandomInteger
 * Generates a random integer that is a set number of bits long
 *
 * The integer that's returned will always have it's most significant bit set to 1
 * and any bits beyond that will be set to 0. For example: If you call this function
 * with bits set to 62, then you'll get an integer that is between 2305843009213693952
 * and 4611686018427387903 inclusive... in hex, that's between 2000000000000000 and
 * 0x3FFFFFFFFFFFFFFF inclusive.
 *
 * The randomness of the integer that's returned is cryptographically secure.
 * If a cryptographically secure integer couldn't be generated, then NULL is returned
 *
 * @param bits The length of the integer in bits
 * @return     A pointer to the generated integer
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/14/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RandomInteger_Header_DEF
#define RandomInteger_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* RandomInteger(uint32_t bits);

#endif
