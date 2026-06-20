/**
 * StructType
 * Creates a struct typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param structTypes A dictionary of struct members which define the keys, optionality, and type of struct members
 * @param modifier    The type modifier - none, optional, or forced
 * @return            A pointer to the new struct type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StructType_Header_DEF
#define StructType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeStructTypeMemberDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enTypeModifier.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* StructType(typeStructTypeMemberDict* structTypes, enTypeModifier modifier);

#endif
