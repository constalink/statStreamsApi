/**
 * ListRef
 * Creates a list typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeList and will have the typeValueRef->value property
 * set to the list argument that's passed into this function
 *
 * @param list A pointer to the list value that the reference contains
 * @return     A pointer to the list value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link
 * @created  	10/9/202
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ListRef_Header_DEF
#define ListRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeValueRefList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ListRef(typeValueRefList* list);

#endif
