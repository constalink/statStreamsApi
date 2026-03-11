/**
 * MatchAll
 * Matches a string or binary value against a regular expression and
 * returns a list of all matches.
 *
 * This function expects the value argument to be a string or binary reference
 * and it expects the regExp argument to be a regular expression reference.
 * If not, then NULL will be returned.
 *
 * If the value and regExp arguments are the correct type, then the return
 * value will be a typeValueRef with the type property set to enValueRefTypeList
 * and the value property set to a list that contains all the matches in the string
 *
 * The list that's returned will be this data type if value is a string:
 *  [
 *  	{
 *  		match: string,
 *  		range: range,
 *  		captures: [
 *  			{
 *  				match: string,
 *  				range: range
 *  			}
 *  		]
 *  	}
 *  ]
 *
 * And it'll be this data type if the value is a binary value:
 *  [
 *  	{
 *  		match: binary,
 *  		range: range,
 *  		captures: [
 *  			{
 *  				match: binary,
 *  				range: range
 *  			}
 *  		]
 *  	}
 *  ]
 *
 * @param value  A pointer to the string or binary value to match
 * @param regExp A pointer to a regular expression value to match against
 * @return       A pointer to a list of matches or NULL if the arguments passed in aren't what's expected
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/16/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MatchAll_Header_DEF
#define MatchAll_Header_DEF

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
typeValueRef* MatchAll(typeValueRef* value, typeValueRef* regExp);

#endif
