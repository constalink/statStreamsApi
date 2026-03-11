/**
 * MatchValue
 * Converts a regular expression match into a value reference
 *
 * This function takes a typeMatch pointer and a pointer to the value
 * that was searched and it returns a value reference of this data type:
 *
 *  {
 *		match: (string | binary),
 *		range: range,
 *		captures: [
 *			{
 *				match: (string | binary),
 *				range: range
 *			}
 *		]
 *	}?
 *
 * This function expects a string or binary value as the searchVal argument
 * This determines the character range of the match if it's a string, and
 * the matched value data type: (string | binary)
 *
 * @param match     A pointer to a typeMatch value to convert
 * @param searchVal A pointer to the value that was searched or matched against a regular expression
 * @return          A pointer to a value reference that contains the match data
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/10/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MatchValue_Header_DEF
#define MatchValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeMatch.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* MatchValue(typeMatch* match, typeValueRef* searchVal);

#endif
