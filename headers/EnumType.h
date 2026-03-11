/**
 * EnumType
 * Creates an enum typeType value and returns a pointer to it
 *
 * This function allocates a new tyeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param choices  A pointer to a list of possible choices
 * @param filePath An optional pointer to a filePath where the enum is defined
 * @param optional Whether or not the type is optional or can hold empty values
 * @return         A pointer to the new enum typeType value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EnumType_Header_DEF
#define EnumType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeDataList.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* EnumType(typeDataList* choices, typeData* filePath, typeBool optional);

#endif
