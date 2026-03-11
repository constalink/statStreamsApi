/**
 * IsNotSame
 * Tells if two values are not the same
 *
 * This function compares two values and returns false if they are the same
 * or true if they are not the same. Two values are the same if they are the
 * same type and at least one of the following are true:
 * - They are the same pointer
 * - They have the same underlying pointer as the value property
 * - They are equal to each other (by value) for the following types
 *  	- string, binary, int, bool, regExp, range
 * - They are both fractions and the integers, numerators, and denominators are all equal
 *
 * @param value1 A pointer to the first value to compare
 * @param value2 A pointer to the second value to compare
 * @return       false if the two values are the same or true if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/23/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsNotSame_Header_DEF
#define IsNotSame_Header_DEF

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
typeBool IsNotSame(typeValueRef* value1, typeValueRef* value2);

#endif
