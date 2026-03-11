/**
 * DivideValues
 * Divides two values and returns the result
 *
 * This function expects that value1 and value2 are either integer values
 * or fraction values. They don't need to be the same type. You can pass
 * an integer and a fraction. If the two values aren't either integers
 * or fractions, then NULL is returned
 *
 * This return value will be a typeValueRef value with the type property
 * set to enValueRefTypeFraction and the value property set to the quotient
 * or result when dividing value1 by value2
 *
 * @param value1 A pointer to the dividend or number to divide
 * @param value2 A pointer to the divisor or number to divide by
 * @return       A pointer to a fraction that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/20/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DivideValues_Header_DEF
#define DivideValues_Header_DEF

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
typeValueRef* DivideValues(typeValueRef* value1, typeValueRef* value2);

#endif
