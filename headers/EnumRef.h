/**
 * EnumRef
 * Creates an enum typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeEnum and will have the typeValueRef->value property
 * set to the enumVal argument that's passed into this function
 *
 * @param enumVal A pointer to the enum value
 * @return        A pointer to the enum value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EnumRef_Header_DEF
#define EnumRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeEnumValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* EnumRef(typeEnumValue* enumVal);

#endif
