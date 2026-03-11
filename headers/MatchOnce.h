/**
 * MatchOnce
 * Matches a string against a regular expression and returns the first match
 * or an empty ref if a match isn't found
 *
 * This function expects the value argument to be a string or binary reference
 * and it expects the regExp argument to be a regular expression reference.
 * If not, then NULL will be returned.
 *
 * If the value and regExp arguments are the correct type, and a match is found,
 * then the return value will be a typeValueRef with the type property set to
 * enValueRefTypeDict and the value property set to a dictionary value that
 * contains the match. If a match isn't found, then the return value will be
 * a typeValueRef with the type property set to enValueRefTypeEmpty and the
 * value property set to NULL.
 *
 * If a match is found, the return value will have this data type if value is a string:
 *  {
 *  	match: string,
 *  	range: range,
 *  	captures: [
 *  		{
 *  			match: string,
 *  			range: range
 *  		}
 *  	]
 *  }
 *
 * And it'll be this data type if the value is a binary value:
 *  {
 *  	match: binary,
 *  	range: range,
 *  	captures: [
 *  		{
 *  			match: binary,
 *  			range: range
 *  		}
 *  	]
 *  }
 *
 * @param value  A pointer to a a string or binary value to match
 * @param regExp A pointer to a regular expression value to match against
 * @return       A pointer to a match if found or the empty reference if not found
 *               or NULL if the arguments passed in aren't what's expected
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/5/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MatchOnce_Header_DEF
#define MatchOnce_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* MatchOnce(typeValueRef* value, typeValueRef* regExp);

#endif
