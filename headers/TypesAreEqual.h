/**
 * TypesAreEqual
 * Tells if two types are equivalent. 2 types are equivalent if
 * they are the same type and have the same property values.
 * Comparison isn't done by pointer, but by value. So two separate
 * types that have the same underlying property values will be considered
 * equal
 *
 * @param type1 The first type to compare
 * @param type2 The second type to compare
 * @return      true if the two types are equivalent or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/6/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TypesAreEqual_Header_DEF
#define TypesAreEqual_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool TypesAreEqual(typeType* type1, typeType* type2);

#endif
