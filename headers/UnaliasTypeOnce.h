/**
 * UnaliasTypeOnce
 * Unaliases a type one level up only
 *
 * @param type A pointer to the type to unalias
 * @return     A pointer to the type that the alias type is an alias of
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/22/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef UnaliasTypeOnce_Header_DEF
#define UnaliasTypeOnce_Header_DEF

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
typeType* UnaliasTypeOnce(typeType* type);

#endif
