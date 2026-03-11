/**
 * IntZero
 * Returns an integer value that contains zero
 *
 * This is a shortcut function for creating a zero integer which is a commonly used value
 * It is equivalent to the following:
 * IntegerValue(enNumberTypePositive, Integer(0));
 *
 * Instead of that, simply call: IntZero();
 *
 * @return An integer value that contains zero
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntZero_Header_DEF
#define IntZero_Header_DEF

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
typeIntegerValue* IntZero();

#endif
