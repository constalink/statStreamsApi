/**
 * UnaliasedType
 * Takes a type, follows aliases, and returns the unaliased type
 *
 * If the type is a union type, then all union types are unaliased
 * and a new union type with all unaliased types is returned
 * If the type isn't an alias, then the original type is returned
 *
 * @param type A pointer to the type to unalias
 * @return     A pointer to the type that the alias type is an alias of
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/12/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UnaliasedType_Header_DEF
#define UnaliasedType_Header_DEF

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
typeType* UnaliasedType(typeType* type);

#endif
