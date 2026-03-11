/**
 * FractOne
 * Returns a fraction value that contains one
 *
 * This is a shortcut function for creating a one fraction which is a commonly used value
 * It is equivalent to the following:
 * FractionValue(enNumberTypePositive, Fraction(Integer(1, 1, (uint64_t) 1), Integer(0), Integer(1, 1, (uint64_t) 1)));
 *
 * Instead of that, simply call: FractOne();
 *
 * @return A fraction value that contains positive one and 0/1
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractOne_Header_DEF
#define FractOne_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* FractOne();

#endif
