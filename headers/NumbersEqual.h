/**
 * NumbersEqual
 * Tells whether two numbers equal each-other or not
 *
 * This function expects num1 and num2 to be either integer or fraction
 * references. The two values don't need to be the same type, you can pass
 * in one integer and one fraction. If the value types aren't numbers, then
 * false is returned.
 *
 * If num1 is equal to num2 then true is returned, otherwise false is returned
 *
 * @param num1 A pointer to the first number to compare
 * @param num2 A pointer to the second number to compare
 * @return     true if the 2 numbers are considered equal or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NumbersEqual_Header_DEF
#define NumbersEqual_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool NumbersEqual(typeValueRef* num1, typeValueRef* num2);

#endif
