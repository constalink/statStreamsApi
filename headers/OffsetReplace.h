/**
 * OffsetReplace
 * Performs a series of string replacements for a string, starting at an offset
 *
 * IMPORTANT: The start offset is considered the start of the string so an
 * anchor (^) matches at the start offset
 *
 * In the replacement string, you can use "$1" - "$9" to insert the numbered capture group
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
 * @param regExp          A regular expression to match against
 * @param replaceWith     A pointer to a typeData value to use for replacements
 * @param offset          A zero based offset to start searching for replacements from
 * @param maxReplacements The maximum number of replacements to make
 *                        Set to -1 to replace all matches
 * @return                A pointer to a typeData value that has the matches replaced
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/14/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef OffsetReplace_Header_DEF
#define OffsetReplace_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeRegExp.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* OffsetReplace(
	typeData* string,
	typeRegExp* regExp,
	typeData* replaceWith,
	intmax_t offset,
	intmax_t maxReplacements
);

#endif
