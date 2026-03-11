/**
 * MakeBinary
 * Creates a binary object from a list of bytes
 *
 * This function is similar to the Binary function except it allows you to
 * pass in the bytes that the binary value contains.
 *
 * Here is an example of how to call this function
 *
 * // Creates a 2 byte binary with 0x80 and 0xf2 as bytes
 * typeData* binary = MakeBinary(2, 2, 0x80, 0xf2);
 *
 * You can create a partially initialized binary value by passing
 * in less arguments than the length
 *
 * // Creates a 4 byte binary with 0x80 and 0xf2 as the first 2 bytes
 * // and the last 2 bytes are uninitialized
 * typeData* binary = MakeBinary(4, 2, 0x80, 0xf2);
 *
 * @param length The final length of the typeData value
 * @param args   The number of args that are passed into the function
 *               This should be less than or equal to length and should
 *               match the number of additional arguments that are passed in
 * @param ...    Zero or more uint8_t byte arguments.
 *               The number of arguments should match the args parameter
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/20/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MakeBinary_Header_DEF
#define MakeBinary_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* MakeBinary(intmax_t length, intmax_t args, ...);

#endif
