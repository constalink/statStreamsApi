/**
 * EnumValueFromType
 * Creates and returns a typeEnumValue value from an enum data type
 *
 * This function allocates a new typeEnumValue value and tracks it on the
 * current memory stack
 *
 * The data type that's passed in will be unaliased automatically inside the function
 * so you can pass an alias to a enTypeEnum data type. If the typeType->type property
 * of the dataType argument that's passed in isn't enTypeEnum, then an empty
 * enum value with no choices is returned
 *
 * @param dataType A pointer to the eTypeEnum data type to create the enum value from
 * @return         A pointer to the typeEnumValue value that was created
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EnumValueFromType_Header_DEF
#define EnumValueFromType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeEnumValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeEnumValue* EnumValueFromType(typeType* dataType);

#endif
