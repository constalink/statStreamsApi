/**
 * typePropTypeDict
 * Dictionary of typePropType structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/15/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typePropTypeDict_DEF
#define typePropTypeDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typePropType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typePropTypeDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	struct typePropType** values;

} typePropTypeDict;

#endif
