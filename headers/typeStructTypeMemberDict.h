/**
 * typeStructTypeMemberDict
 * Dictionary of typeStructTypeMember structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/23/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeStructTypeMemberDict_DEF
#define typeStructTypeMemberDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeStructTypeMember.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeStructTypeMemberDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	struct typeStructTypeMember** values;

} typeStructTypeMemberDict;

#endif
