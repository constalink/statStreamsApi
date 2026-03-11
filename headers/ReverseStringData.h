/**
 * ReverseStringData
 * Reverses the character order of a data object
 *
 * IMPORTANT: This function is UTF8 safe. This means that if it encounters a multi-byte
 * UTF8 character, it'll preserve that character as is without reversing the byte order
 *
 * Example: If the passed in value is:   "Have a piece of π"
 * Then the result will be               "π fo eceip a evaH"
 *
 * If you need to treat the value as binary and don't need to preserve UTF8 character encoding
 * you should use the ReverseData function instead
 *
 * This function does not modify the typeData value that's passed in. Rather it
 * creates a new typeData value and copies characters into it in reverse order
 *
 * @param data A pointer to a typeData value to reverse
 * @return     A pointer to a new typeData value with the characters in reverse order
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseStringData_Header_DEF
#define ReverseStringData_Header_DEF

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
typeData* ReverseStringData(typeData* string);

#endif
