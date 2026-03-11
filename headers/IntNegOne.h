/**
 * IntNegOne
 * Returns an integer value that contains negative one
 *
 * This is a shortcut function for creating a negative one integer which is a commonly used value
 * It is equivalent to the following:
 * IntegerValue(enNumberTypeNegative, Integer(1, 1, (uint64_t) 1));
 *
 * Instead of that, simply call: IntNegOne();
 *
 * @return An integer value that contains negative one
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntNegOne_Header_DEF
#define IntNegOne_Header_DEF

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
typeIntegerValue* IntNegOne();

#endif
