/**
 * ForcedType
 * Returns the forced non-optional version of a type.
 *
 * This function does not modify the original data type but rather
 * it'll create a new forced non-optional version of a data type if required and return that.
 *
 * If the type is already forced non-optional, then the original type is returned.
 * If the type can't be converted to forced non-optional... for example, if you pass
 * in the empty type, then the undefined type is returned
 *
 * @param type A pointer to the type to convert to forced non-optional
 * @return     A pointer to the forced non-optional version of the type
 *             or the undefined type if the type can't be forced non-optional
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/9/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ForcedType_Header_DEF
#define ForcedType_Header_DEF

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

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* ForcedType(typeType* type);

#endif
