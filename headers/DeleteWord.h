/**
 * DeleteWord
 * Deletes a 64 bit word at a given zero based index from an integer
 * This function does not modify the original integer value that's passed in
 * but rather, it creates a new typeInteger value and copies the
 * 64 bit words from the original value into the new value, but skips
 * the index that we want to delete. If the index we want to delete doesn't
 * exist, then the original integer is returned and a new integer is not created
 *
 * @param integer The integer to delete the word from
 * @param index   The zero based index to delete
 * @return        A pointer to a typeInteger value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/10/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DeleteWord_Header_DEF
#define DeleteWord_Header_DEF

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
typeInteger* DeleteWord(typeInteger* integer, intmax_t index);

#endif
