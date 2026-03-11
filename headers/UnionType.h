/**
 * UnionType
 * Union type - Combines 2 or more types. A value of this type can contain any of the combined types
 *
 * IMPORTANT: If there are no types, then the undefined type is returned.
 * Also, you should not pass in any optional union types. They should all be
 * non optional. The type hint parser won't allow non-optional types directly
 * under a union. Even valid syntax won't result in a non-optional type directly
 * under a union. Here are some examples:
 *
 * (string? | int) - Syntax error. It should be (string | int)?
 * (string | empty) - Results in: string?
 * (string | empty | int) - Results in (string | int)?
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param unionTypes A pointer to a list of types in the union
 * @param optional   Whether or not the type is optional or can hold empty values
 * @return           A pointer to the new union type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/12/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UnionType_Header_DEF
#define UnionType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"
#include "typeTypeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* UnionType(typeTypeList* unionTypes, typeBool optional);

#endif
