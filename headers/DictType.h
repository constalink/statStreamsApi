/**
 * DictType
 * Creates a dictionary typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param subType  A pointer to the dictionary's sub type - the type of values it can hold
 *                 If this is NULL, then the undefined type is returned
 * @param modifier The type modifier - none, optional, or forced
 * @return         A pointer to the new dictionary type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DictType_Header_DEF
#define DictType_Header_DEF

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
#include "enTypeModifier.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* DictType(typeType* subType, enTypeModifier modifier);

#endif
