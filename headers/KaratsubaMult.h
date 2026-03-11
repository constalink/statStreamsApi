/**
 * KaratsubaMult
 * Multiplies 2 integers using the Karatsuba method
 *
 * IMPORTANT: Don't use this function if you can help it.
 * This function is so much slower than the normal MultiplyIntegers
 * function. Even though this function is supposed to be faster, it's
 * not because of the constant overhead of the recursive calling
 *
 * Benchmarks for multiplying 2 4096 bit integers 1 million times
 * MultiplyIntegers: 18 seconds
 * KaratsubaMult: 3 minutes 22 seconds
 *
 * @param intVal   A pointer to the first integer to multiply
 * @param timesVal A pointer to the 2nd to multiply
 * @return         A pointer to the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/20/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef KaratsubaMult_Header_DEF
#define KaratsubaMult_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

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
typeInteger* KaratsubaMult(typeInteger* intVal, typeInteger* timesVal);

#endif
