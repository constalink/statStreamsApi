/**
 * ConvertDataToRegExp
 * Converts a string to a regular expression value
 *
 * If the string argument that's passed in contains characters that can be interpreted
 * as a valid regular expression, then the regular expression value is returned otherwise
 * an empty reference is returned.
 *
 * This function takes a look at the characters in the string that's passed in and
 * determines whether or not it can be interpreted as a regular expression. It expects
 * the string to start with a forward slash and it expects the string to end with a
 * forward slash and optionally i, m, and s flags. It also expects valid regular expression
 * syntax between the two forward slashes.
 *
 * If the syntax of the regular expression is correct, the return value will be a typeValueRef
 * value with the type property set to enValueRefTypeRegExp and the value property set to
 * a typeRegExp value pointer that contains the interpreted regular expression
 *
 * If the string can't be interpreted as a regular expression, then an empty reference is returned.
 * This is different from an empty string or a zero length regExp value. Rather, it'll be a
 * typeValueRef value where the type property is set to enValueRefTypeEmpty and the value property
 * is set to NULL
 *
 * @param string A pointer to the string to convert
 * @return       A pointer to the regular expression value or empty reference
 *
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/29/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertDataToRegExp_Header_DEF
#define ConvertDataToRegExp_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertDataToRegExp(typeData* string);

#endif
