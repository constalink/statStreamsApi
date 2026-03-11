/**
 * RangeRef
 * Creates a range typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeRange and will have the typeValueRef->value property
 * set to the rangeVal argument that's passed into this function
 *
 * @param rangeVal A pointer to the range value that the reference contains
 * @return         A pointer to the range value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link
 * @created  	10/9/202
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RangeRef_Header_DEF
#define RangeRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeRangeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* RangeRef(typeRangeValue* rangeVal);

#endif
