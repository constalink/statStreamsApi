/**
 * IsLikelyPrime
 * Tells if an integer is likely prime
 *
 * Simply pass in an integer and the number of rounds to perform and it'll
 * return true if the number if likely prime or false if it is definitely not prime
 *
 * This function uses the Miller-Rabin primality test in addition to some other trivial
 * tests to check if a number is prime or not. The rounds argument corresponds to the
 * number of times to run the Miller-Rabin test using random bases. The more rounds,
 * the more certain you can be that the number if actually prime. For a cryptographically
 * secure prime number, (e.g. RSA key generation) it is recommended to pass in a value
 * of at least 40. 40 rounds of the Miller-Rabin test are recommended to achieve a
 * vanishingly small probability of error. While fewer rounds (6-10) are sometimes deemed
 * sufficient for very large primes (1024 bit+), 40 rounds ensures compliance with security
 * standards. 64 or more rounds may take a non-trivial amount of time on large prime numbers.
 * 128 rounds is the maximum recommended number of rounds for large prime numbers.
 *
 * If you pass 0 for rounds, then the Miller-Rabin test will not run at all and the result
 * will be true only if the number is a small known prime number. Any larger prime numbers
 * will return false.
 *
 * @param integer A pointer to the integer to test if it is prime
 * @param rounds  The number of rounds of testing to perform on the number
 *                The higher the rounds, the more sure you can be that the number is actually prime
 * @return        true if the number is likely prime or false if it is definitively not prime
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/14/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsLikelyPrime_Header_DEF
#define IsLikelyPrime_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsLikelyPrime(typeInteger* integer, uint8_t rounds);

#endif
