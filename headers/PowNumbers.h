/**
 * PowNumbers
 * Calculates the power of a fraction value
 *
 * @param fraction A pointer to a fraction value
 * @param power    A pointer to an integer value to take the fraction to the power of
 * @return         A pointer to a fraction value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/31/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PowNumbers_Header_DEF
#define PowNumbers_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* PowNumbers(typeFractionValue* fraction, typeIntegerValue* power);

#endif
