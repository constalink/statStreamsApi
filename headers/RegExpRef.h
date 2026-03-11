/**
 * RegExpRef
 * Creates a regular expression typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeRegExp and will have the typeValueRef->value property
 * set to the regExpVal argument that's passed into this function
 *
 * @param regExpVal A pointer to the regular expression value that the reference contains
 * @return          A pointer to the regular expression value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link
 * @created  	10/9/202
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RegExpRef_Header_DEF
#define RegExpRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeRegExp.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* RegExpRef(typeRegExp* regExpVal);

#endif
