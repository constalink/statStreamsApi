/**
 * AliasType
 * Creates an alias typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param name      A pointer to the alias name
 * @param filePath  A pointer to the file path where the typeDef is defined. Can be NULL
 * @param subType   A pointer to the typeType that this type is an alias of
 * @param valueType The value type of the alias type. enValueTypeUnknown means that the
 *                  it'll be left to the subType to determine the value type
 * @return          A pointer to the new alias type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AliasType_Header_DEF
#define AliasType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enValueType.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* AliasType(
	typeData* name,
	typeData* filePath,
	typeType* subType,
	enValueType valueType
);

#endif
