/**
 * typeArgTypeDict
 * Dictionary of typeArgType structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/15/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeArgTypeDict_DEF
#define typeArgTypeDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeArgType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeArgTypeDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	struct typeArgType** values;

} typeArgTypeDict;

#endif
