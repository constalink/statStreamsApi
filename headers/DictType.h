/**
 * DictType
 * Creates a dictionary typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param subType  A pointer to the dictionary's sub type - the type of values it can hold
 *                 If this is NULL, then the undefined type is returned
 * @param optional Whether or not the type is optional or can hold empty values
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
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* DictType(typeType* subType, typeBool optional);

#endif
