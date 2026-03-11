/**
 * IntOne
 * Returns an integer value that contains one
 *
 * This is a shortcut function for creating a one integer which is a commonly used value
 * It is equivalent to the following:
 * IntegerValue(enNumberTypePositive, Integer(1, 1, (uint64_t) 1));
 *
 * Instead of that, simply call: IntOne();
 *
 * @return An integer value that contains one
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntOne_Header_DEF
#define IntOne_Header_DEF

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
typeIntegerValue* IntOne();

#endif
