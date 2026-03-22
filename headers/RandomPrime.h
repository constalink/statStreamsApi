/**
 * RandomPrime
 * Generates a random prime integer
 *
 * This function generates a random prime number that is a certain number of bits long.
 * The bits argument MUST be at least 16 and the rounds MUST be at least 1.
 *
 * IMPORTANT: This function generates numbers that are likely prime but we can't be 100%
 * sure as that would take a tremendous amount of computing power and time to determine.
 * The "rounds" argument determines how sure we are that a number is actually prime. The
 * higher the number of rounds, the more likely it is that the number is actually prime.
 *
 * If you want a cryptographically secure prime number, you'll want to set the rounds to
 * at least 40. If you set it to 64 or more rounds, it may take a non-trivial amount of
 * time on larger prime numbers. 128 Is the maximum recommended number of rounds for for
 * large prime numbers (1024 bit+)
 *
 * The minimum number of bits is 16 and the minimum rounds is 1. If you pass in less then
 * that, then NULL will be returned immediately.
 *
 * If a random prime number can't be generated, then NULL is returned
 *
 * @param bits   The length of the generated prime number in bits. Minimum is 16
 * @param rounds The number of rounds to use for testing if the number is prime. Minimum is 1
 *               The higher the rounds, the more sure you can be that the number is actually prime
 * @return       A pointer to the prime number
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/20/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RandomPrime_Header_DEF
#define RandomPrime_Header_DEF

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
typeInteger* RandomPrime(uint32_t bits, uint8_t rounds);

#endif
