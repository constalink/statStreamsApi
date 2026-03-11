/**
 * LowerCase
 * Converts a string to lower case
 * This function does not modify the value that's passed in. Rather, it creates
 * an entirely new typeData value and copies the value into it while converting
 * upper case letters to lower case letters.
 *
 * @param string A pointer to a typeData value to convert
 * @return       A lower case version of the value passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/16/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LowerCase_Header_DEF
#define LowerCase_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* LowerCase(typeData* string);

#endif
