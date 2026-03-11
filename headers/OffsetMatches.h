/**
 * OffsetMatches
 * Returns a list of regular expression matches for a string, staring at an offset
 *
 * IMPORTANT: The start offset is considered the start of the string so an
 * anchor (^) matches at the start offset
 *
 * The return value will have no more than maxMatches elements if maxMatches
 * is set to a positive number. If maxMatches is 0, then an empty list is returned
 * and if maxMatches is -1, then all matches are returned
 *
 * @param string     A pointer to a typeData value to match
 * @param regExp     A pointer to a regular expresion to match against
 * @param offset     A zero based index to start matching from
 * @param maxMatches The maximum number of matches to return.
 *                   Set to -1 for no maximum
 * @return           A pointer to a list of matches
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef OffsetMatches_Header_DEF
#define OffsetMatches_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeMatchList.h"
#include "typeRegExp.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeMatchList* OffsetMatches(
	typeData* string,
	typeRegExp* regExp,
	intmax_t offset,
	intmax_t maxMatches
);

#endif
