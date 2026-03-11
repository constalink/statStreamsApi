/**
 * Matches
 * Returns a list of regular expression matches in a string
 * This function matches a string against a regular expression
 * and returns a list of matches up to "maxMatches" matches
 * If you pass -1 for the maxMatches argument, then all matches
 * will be returned. If you pass zero for maxMatches, then
 * an empty list will be returned.
 *
 * This function is similar to the OffsetMatches function except
 * it starts matching at the start of the string and has no option
 * to start matching at an offset.
 *
 * @param string     A pointer to the typeData value to perform the match on
 * @param regExp     A pointer to the regular expression to match against
 * @param maxMatches The maximum number of matches to return.
 *                   Pass -1 for no max
 * @return           A pointer to a list of matches
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Matches_Header_DEF
#define Matches_Header_DEF

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
#include "typeMatchList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeMatchList* Matches(
	typeData* string,
	typeRegExp* regExp,
	intmax_t maxMatches
);

#endif
