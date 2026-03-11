/**
 * GenericRestrictedToType
 * Converts a generic type to a non-generic type. If the generic is restricted, that type is returned
 * otherwise any / any? is returned depending the optional modifier of the generic type
 *
 * If the type isn't generic, then the original type is returned
 * If keepNonRestricted is true and the generic type isn't restricted, then the original
 * generic type is returned.
 *
 * @param genericType       A pointer to a generic type to convert
 * @param keepNonRestricted Whether or not to return a generic type that isn't restricted or not
 *                          It this is true, then the original type is returned if it isn't restricted
 *                          If this is false, then the any or any? type is returned if it isn't restricted
 * @return                  The generic's restricted type or any/any? depending on the arguments passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/13/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef GenericRestrictedToType_Header_DEF
#define GenericRestrictedToType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* GenericRestrictedToType(typeType* genericType, typeBool keepNonRestricted);

#endif
