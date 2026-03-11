/**
 * StructTypeToDictType
 * Converts a struct type to an equivalent dictionary type
 *
 * What this function does is take all the value types in the struct
 * type and combines them all together into a combined type (possibly union type)
 * and uses that as the sub type for the dictionary type that's returned.
 *
 * For example:
 * {key1: string, key2: int}
 * Becomes:
 * {(string | int)}
 *
 * If the type passed in is already a dict type, then it's simply returned
 * If the type passed in is not either a struct or dict type, then
 * the undefined type is returned
 *
 * @param structType A pointer to the struct type to convert
 * @return           A pointer to the result dictionary type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/25/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StructTypeToDictType_Header_DEF
#define StructTypeToDictType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* StructTypeToDictType(typeType* structType);

#endif
