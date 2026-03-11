/**
 * IntInfinity
 * An infinity integer value
 * This function creates and returns an integer value that represents infinity
 *
 * The return value will have a 0 integer and a enNumberTypePositiveInfinity number type
 *
 * This is a shortcut function for creating an infinity integer which is a commonly used value
 * It is equivalent to the following:
 * IntegerValue(enNumberTypePositiveInfinity, Integer(0));
 *
 * Instead of that, simply call: IntInfinity();
 *
 * @return A pointer to an integer value that represents infinity
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntInfinity_Header_DEF
#define IntInfinity_Header_DEF

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
typeIntegerValue* IntInfinity();

#endif
