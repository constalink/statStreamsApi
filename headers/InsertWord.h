/**
 * InsertWord
 * Inserts a 64 bit word into an integer value at a given index
 *
 * This function doesn't modify the original integer value, but rather,
 * it creates a brand new integer value and copies the words from the
 * original value into it, leaving space for the new word that's being inserted
 *
 * @param integer The integer value to insert the new word into
 * @param newWord The new 64 bit word to insert
 * @param atIndex The zero based index to insert the new word at. Negative indexes are supported
 *                To insert a word at the end, you can pass -1;
 * @return        A pointer to a new typeInteger value that has the new word inserted at the specified index
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/25/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef InsertWord_Header_DEF
#define InsertWord_Header_DEF

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
typeInteger* InsertWord(typeInteger* integer, uint64_t newWord, intmax_t atIndex);

#endif
