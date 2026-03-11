/**
 * UpperCase
 * Converts a string to upper case
 * This function does not modify the value that's passed in. Rather, it creates
 * an entirely new typeData value and copies the value into it while converting
 * lower case letters to upper case letters.
 *
 * @param string A pointer to a typeData value to convert
 * @return       An upper case version of the value passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	11/16/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UpperCase_Header_DEF
#define UpperCase_Header_DEF

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
typeData* UpperCase(typeData* string);

#endif
