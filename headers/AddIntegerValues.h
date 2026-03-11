/**
 * AddIntegerValues
 * Adds two integer values and returns the result as a new integer value
 *
 * @param int1 An integer value
 * @param int2 A 2nd integer value
 * @return     A new integer value that contains the sum of the 2 integer values passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddIntegerValues_Header_DEF
#define AddIntegerValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* AddIntegerValues(typeIntegerValue* int1, typeIntegerValue* int2);

#endif
