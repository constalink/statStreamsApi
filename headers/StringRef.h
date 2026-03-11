/**
 * StringRef
 * Creates a string typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeString and will have the typeValueRef->value property
 * set to the string argument that's passed into this function
 *
 * @param string A pointer to the string data that the reference contains
 * @return       A pointer to the string value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link
 * @created  	10/9/202
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StringRef_Header_DEF
#define StringRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeStringValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* StringRef(typeStringValue* string);

#endif
