/**
 * DivideFractionValues
 * Divides fraction values and returns the result as a new fraction value
 *
 * This function does not modify either of the fractions passed in but rather,
 * it creates a new typeFractionValue in which to store the result
 *
 * @param fraction1 A fraction value that represents the dividend or the fraction being divided
 * @param fraction2 A fraction value that represents the divisor or the fraction to divide by
 * @return          A new fraction value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/20/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DivideFractionValues_Header_DEF
#define DivideFractionValues_Header_DEF

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
typeFractionValue* DivideFractionValues(
	typeFractionValue* fraction1,
	typeFractionValue* fraction2
);

#endif
