/**
 * FlattenedTypes
 * Returns a flattened list of typeType values from a given typeType value.
 * This function extracts out all union types and alias types and extracts out
 * all optionals to the empty type so that the return value contains a list of
 * definite types. That is a list of types that each only refer to a single data
 * type.
 *
 * string? becomes [string, empty]
 * (string | int)? becomes [string, int, empty]
 *
 * @param type A pointer to typeType value to flatten
 * @return     A list of flattened, definite data types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FlattenedTypes_Header_DEF
#define FlattenedTypes_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeTypeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeTypeList* FlattenedTypes(typeType* type);

#endif
