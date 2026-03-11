/**
 * BoolRef
 * Returns the "true" or the "false" typeValueRef value depending on the value of
 * the boolValue argument that's passed into the function. The return value is a global
 * value and is tracked on the global memory stack. Also, every time you call
 * this function, the same pointer will be returned as they are both a singletons
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeBool
 *
 * @param boolValue true to return the "true" value ref or false to return the "false" value ref
 * @return          A pointer to the "true" or "false" value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BoolRef_Header_DEF
#define BoolRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* BoolRef(typeBool boolValue);

#endif
