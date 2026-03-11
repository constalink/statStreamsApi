/**
 * FlattenTypes
 * Returns a flattened list of typeType values from a given list of types.
 * This function extracts out all union types and extracts out all optionals
 * to the empty type so that the return value contains a list of definite types
 *
 * @param types A pointer to a list of typeType values
 * @return      A list of flattened, definite data types
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FlattenTypes_Header_DEF
#define FlattenTypes_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeTypeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeTypeList* FlattenedTypes(typeTypeList* types);

#endif
