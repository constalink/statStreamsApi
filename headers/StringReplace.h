/**
 * StringReplace
 * Performs a series of string replacements for a string
 *
 * This function is similar to the OffsetStringReplace function except that this function
 * starts replacements at the start of the string and has no option to start at an offset
 *
 * This function does not modify the original string but rather,
 * it returns a pointer to a new string that has the matches replaced
 *
 * The maxReplacements argument determines how many replacements are performed.
 * If maxReplacements is -1, then all matches are replaced. If it's zero, then
 * the original string is returned, unchanged. If it's a positive number then
 * at most that many matches are replaced
 *
 * @param string          A pointer to a typeData value to search and replace matches in
 * @param search          A pointer to a typeData value to search for within the string
 * @param replaceWith     A pointer to a typeData value to use for replacements
 * @param maxReplacements The maximum number of replacements to make
 *                        Set to -1 to replace all matches
 * @return                A pointer to a typeData value that has the matches replaced
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/4/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringReplace_Header_DEF
#define StringReplace_Header_DEF

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
typeData* StringReplace(
	typeData* string,
	typeData* search,
	typeData* replaceWith,
	intmax_t maxReplacements
);

#endif
