/**
 * FractionRef
 * Creates a fraction typeValueRef value and returns a pointer to it
 *
 * This function allocates a new typeValueRef value and tracks it on the
 * current memory stack.
 *
 * The return value will have the typeValueRef->type property set to
 * enValueRefTypeFraction and will have the typeValueRef->value property
 * set to the fractionValue argument that's passed into this function
 *
 * @param fractionValue A pointer to the fraction value that the reference contains
 * @return              A pointer to the fraction value reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractionRef_Header_DEF
#define FractionRef_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* FractionRef(typeFractionValue* fractionValue);

#endif
