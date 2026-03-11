/**
 * IntNegInfinity
 * A negative infinity integer value
 * This function creates and returns an integer value that represents negative infinity
 *
 * The return value will have a 0 integer and a enNumberTypeNegativeInfinity number type
 *
 * This is a shortcut function for creating a negative infinity integer which is a commonly used value
 * It is equivalent to the following:
 * IntegerValue(enNumberTypeNegativeInfinity, Integer(0));
 *
 * Instead of that, simply call: IntNegInfinity();
 *
 * @return A pointer to an integer value that represents negative infinity
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntNegInfinity_Header_DEF
#define IntNegInfinity_Header_DEF

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
typeIntegerValue* IntNegInfinity();

#endif
