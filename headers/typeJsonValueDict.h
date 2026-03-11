/**
 * typeJsonValueDict
 * Dictionary of typeJsonValue structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/1/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeJsonValueDict_DEF
#define typeJsonValueDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeJsonValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeJsonValueDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	typeJsonValue** values;

} typeJsonValueDict;

#endif
