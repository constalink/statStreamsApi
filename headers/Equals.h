/**
 * Equals
 * Compares two values and tells whether or not they are equal
 *
 * For most values, equality is determined by comparing the underlying
 * primitive values contained within the value reference. That's to say that
 * comparison is done by value not by reference. So two values don't need to
 * be the same pointer in order to be equal. They just have to be the same type
 * and have the same data contained within them.
 *
 * For enum, stream, and function values, these have to be the same pointer in
 * order to be considered equal. These value types are compared by reference
 *
 * @param value1 A pointer to the first value to compare
 * @param value2 A pointer to the second value to compare
 * @return       true if the two values are considered equal or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Equals_Header_DEF
#define Equals_Header_DEF

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
typeBool Equals(typeValueRef* value1, typeValueRef* value2);

#endif
