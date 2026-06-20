/**
 * EnumOptionType
 * Creates an enumOption typeType value and returns a pointer to it
 *
 * This function allocates a new tyeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param choices  A pointer to a list of possible choices
 * @param filePath An optional pointer to a filePath where the enum is defined
 * @param modifier The type modifier - none, optional, or forced
 * @return         A pointer to the new enumOption typeType value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/27/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EnumOptionType_Header_DEF
#define EnumOptionType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDataList.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enTypeModifier.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* EnumOptionType(
	typeDataList* choices,
	typeData* filePath,
	enTypeModifier modifier
);

#endif
