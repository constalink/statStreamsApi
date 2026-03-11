/**
 * Integer
 * Creates a typeInteger value and returns a pointer to it
 *
 * This function allocates a new typeInteger value using the passed in arguments
 * and tracks it on the current memory stack
 *
 * This function takes a variable number of arguments. The first argument is the
 * number of 64 bit words, the 2nd argument is the number of 64 bit words you'd like
 * to pass into the function, and every argument after that should be 64 bit words.
 *
 * Here is an example of how to call this function
 *
 * // Creates a 128 bit integer value with 0x0897da6b2001d0d6 and 0xe633337364f1ab7e as words
 * typeInteger* intVal = Integer(2, 2, (uint64_t) 0x0897da6b2001d0d6, (uint64_t) 0xe633337364f1ab7e);
 *
 * You can create a partially initialized integer value by passing in less
 * arguments than the length
 *
 * // Creates a 256 bit integer value with 0x0897da6b2001d0d6 and 0xe633337364f1ab7e as the first 2 words
 * typeInteger* intVal = Integer(4, 2, (uint64_t) 0x0897da6b2001d0d6, (uint64_t) 0xe633337364f1ab7e);
 *
 * IMPORTANT: This function expects unsigned 64 bit words for the integer value.
 * If passing in literal numbers, make sure to cast them to uint64_t. In other words, don't do this:
 * Integer(3, 3, 1, 2, 3);
 * Instead, do this:
 * Integer(3, 3, (uint64_t) 1, (uint64_t) 2, (uint64_t) 3);
 * This is required because some compilers will cast integer literals to int32_t or to int64_t
 * which will end up giving you the wrong value. GCC on Mac OS is notorious for this.
 *
 * @param length The final length of the typeInteger value in 64-bit words. 1 is 64 bit, 2 is 128 bit, etc.
 * @param args   The number of 64-bit arguments that are passed into the function
 *               This should be less than or equal to length and should
 *               match the number of additional arguments that are passed in
 * @param ...    Zero or more uint64_t word arguments.
 *               The number of arguments should match the args parameter
 * @return       A pointer to the new integer value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Integer_Header_DEF
#define Integer_Header_DEF

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
typeInteger* Integer(intmax_t length, intmax_t args, ...);

#endif
