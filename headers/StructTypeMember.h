/**
 * StructTypeMember
 * Creates a typeStructTypeMember value and returns a pointer to it
 *
 * This function allocates a new typeStructTypeMember value form the passed
 * in values and tracks it on the current memory stack
 *
 * A struct type member defines the data type and optionality of a struct member,
 * that is the types of values a struct can hold
 *
 * @param type     A pointer to the member data type
 * @param optional Whether or not the struct member is optional. If false, then the
 *                 struct member must be present otherwise, it can be missing from the struct
 * @return         A pointer to the new typeStructTypeMember value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/23/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StructTypeMember_Header_DEF
#define StructTypeMember_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"
#include "typeStructTypeMember.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeStructTypeMember* StructTypeMember(typeType* type, typeBool optional);

#endif
