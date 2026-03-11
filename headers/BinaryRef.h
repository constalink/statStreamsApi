/**
 * BinaryRef
 * Creates a binary typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeBinary and will have the typeValueRef->value property
 * set to the binary argument that's passed into this function
 *
 * @param binary A pointer to the binary data that the reference contains
 * @return       A pointer to the binary value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BinaryRef_Header_DEF
#define BinaryRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* BinaryRef(typeData* binary);

#endif
