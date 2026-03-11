/**
 * SubtractFractionValues
 * Subtracts fraction values and returns the result
 *
 * This function handles infinity and negative values
 *
 * @param fraction      A pointer to a fraction value
 * @param minusFraction A pointer to a fraction value to substract
 * @return              A pointer to a fraction that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/19/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SubtractFractionValues_Header_DEF
#define SubtractFractionValues_Header_DEF

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
typeFractionValue* SubtractFractionValues(
	typeFractionValue* fraction,
	typeFractionValue* minusFraction
);

#endif
