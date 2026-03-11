/**
 * DivideIntegerValues
 * Divides two integer values and returns the result as a new fraction value
 *
 * @param int1 The integer value that represents the dividend or the number to divide
 * @param int2 The integer value that represents the divisor or the number to divide by
 * @return     A fraction value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/20/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DivideIntegerValues_Header_DEF
#define DivideIntegerValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* DivideIntegerValues(
	typeIntegerValue* int1,
	typeIntegerValue* int2
);

#endif
