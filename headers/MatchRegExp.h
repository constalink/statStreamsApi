/**
 * MatchRegExp
 * Matches a typeData value against a regular expression and returns the
 * first match it finds or NULL if a match isn't found
 *
 * @param regExp   A pointer to a regular expression to match against
 * @param string   A pointer to a typeData value to perform the match on
 * @param startPos The position to consider the "start of string" for anchor purposes
 * @param fromPos  The position to start searching from
 * @return         A pointer to the match if found or NULL if not found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MatchRegExp_Header_DEF
#define MatchRegExp_Header_DEF

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
#include "typeMatch.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeMatch* MatchRegExp(
	typeRegExp* regExp,
	typeData* string,
	// Start anchors only match from this position without multiline set
	intmax_t startPos,
	intmax_t fromPos
);

#endif
