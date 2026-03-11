/**
 * typeFunctionTypeDict
 * Dictionary of typeFunctionType structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	9/8/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeFunctionTypeDict_DEF
#define typeFunctionTypeDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeFunctionType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeFunctionTypeDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	typeFunctionType** values;

} typeFunctionTypeDict;

#endif
