/**
 * MultiplyFractionValues
 * Multiplies fraction values
 *
 * @param fraction1 A pointer to the first fraction to multiply
 * @param fraction2 A pointer to the 2nd fraction to multiply
 * @return          A pointer to the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/19/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyFractionValues_Header_DEF
#define MultiplyFractionValues_Header_DEF

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
typeFractionValue* MultiplyFractionValues(
	typeFractionValue* fraction1,
	typeFractionValue* fraction2
);

#endif
