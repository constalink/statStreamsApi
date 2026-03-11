/**
 * IsAlphaNumeric
 * Tells whether or not a character is alpha numeric (a-z A-Z or 0-9)
 *
 * @param character         The character to check
 * @param includeUnderscore Whether or not to include the underscore character as an alpha numeric character
 * @return                  true if the character is alpha numeric or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsAlphaNumeric_Header_DEF
#define IsAlphaNumeric_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsAlphaNumeric(char character, typeBool includeUnderscore);

#endif
