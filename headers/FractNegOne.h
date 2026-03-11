/**
 * FractNegOne
 * Returns a fraction value that contains negative one
 *
 * This is a shortcut function for creating a negative one fraction which is a commonly used value
 * It is equivalent to the following:
 * FractionValue(enNumberTypeNegative, Fraction(Integer(1, 1, (uint64_t) 1), Integer(0), Integer(1, 1, (uint64_t) 1)));
 *
 * Instead of that, simply call: FractNegOne();
 *
 * @return A fraction value that contains negative one and 0/1
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractNegOne_Header_DEF
#define FractNegOne_Header_DEF

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
typeFractionValue* FractNegOne();

#endif
