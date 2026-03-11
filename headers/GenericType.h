/**
 * GenericType
 * Creates a generic typeType value and returns a pointer to it
 *
 * This function allocates a new typeType value from the values passed in
 * and tracks it on the current memory stack
 *
 * @param name             A pointer to the generic name. This should be a single upper case letter like "T"
 * @param restrictedToType A pointer to the type that the generic is restricted to or NULL if not restricted
 * @param optional         Whether or not the type is optional or can hold empty values
 * @return                 A pointer to the new generic type
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef GenericType_Header_DEF
#define GenericType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeType* GenericType(
	typeData* name,
	typeType* restrictedToType,
	typeBool optional
);

#endif
