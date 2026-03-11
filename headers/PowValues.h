/**
 * PowValues
 * Raises a value to a power and returns the result
 *
 * This function expects that value argument is either an integer value
 * or a fraction value. And it expects that the power argument to be an
 * integer value. If that's not the case, then NULL is returned
 *
 * If the values are the correct type, then the return value will be a
 * typeValueRef value with the type property set to enValueRefTypeFraction
 * and the value property set to the result of taking value to the specified power
 *
 * @param value1 A pointer to the integer or fraction to exponentiate
 * @param value2 A pointer to the exponent integer
 * @return       A pointer to a fraction that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/18/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PowValues_Header_DEF
#define PowValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* PowValues(typeValueRef* value, typeValueRef* power);

#endif
