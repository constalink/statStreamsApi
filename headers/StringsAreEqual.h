/**
 * StringsAreEqual
 * Tells whether or not 2 strings are equal
 * This function takes two typeData values and compares them byte by byte.
 * If they are the same length and the bytes are all equal then this function
 * returns true, otherwise it returns false
 *
 * @param string1 A typeData pointer to the first value to compare against
 * @param string2 A typeData pointer to the second value to compare against
 * @return        true if the 2 values are the same length and contain the equal bytes or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringsAreEqual_Header_DEF
#define StringsAreEqual_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool StringsAreEqual(typeData* string1, typeData* string2);

#endif
