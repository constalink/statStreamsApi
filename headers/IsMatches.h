/**
 * IsMatches
 * Tells whether or not a string matches a regular expression
 * This function matches a string against a regular expression
 * and returns true if it matches or false if not
 *
 * @param string A pointer to a typeData value to check
 * @param regExp A pointer to a typeRegExp value to match against
 * @return       True if the string matches the regExp or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/10/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
*/

#ifndef IsMatches_Header_DEF
#define IsMatches_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeRegExp.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsMatches(typeData* string, typeRegExp* regExp);

#endif
