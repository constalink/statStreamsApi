/**
 * DictRef
 * Creates a dictionary typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeDict and will have the typeValueRef->value property
 * set to the dict argument that's passed into this function
 *
 * @param dict A pointer to the a dictionary that contains other typeValueRef values
 * @return     A pointer to the dictionary value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DictRef_Header_DEF
#define DictRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeValueRefDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* DictRef(typeValueRefDict* dict);

#endif
