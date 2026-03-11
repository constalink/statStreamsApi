/**
 * FractNegInfinity
 * A negative infinity fraction value
 * This function creates and returns a fraction value that represents negative infinity
 *
 * The return value will have a 0 integer, 0 numerator, a 1 denominator, and a
 * enNumberTypeNegativeInfinity number type
 *
 * This is a shortcut function for creating a negative infinity fraction which is a commonly used value
 * It is equivalent to the following:
 * FractionValue(enNumberTypeNegativeInfinity, Fraction(Integer(0), Integer(0), Integer(1, 1, (uint64_t) 1)));
 *
 * Instead of that, simply call: FractNegInfinity();
 *
 * @return A pointer to a fraction value that represents negative infinity
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractNegInfinity_Header_DEF
#define FractNegInfinity_Header_DEF

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
typeFractionValue* FractNegInfinity();

#endif
