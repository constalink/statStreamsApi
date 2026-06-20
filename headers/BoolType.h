/**
 * BoolType
 * Returns the "bool", "bool?", or "bool!" typeType value. The return value is a global
 * value and is tracked on the global memory stack. Also, every time you call
 * this function, the same pointer will be returned as these types are singletons
 *
 * @param modifier The type modifier - none, optional, or forced
 * @return         A pointer to the "bool", "bool?", or "bool!" typeType value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BoolType_Header_DEF
#define BoolType_Header_DEF

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
typeType* BoolType(enTypeModifier modifier);

#endif
