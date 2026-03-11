/**
 * typeIntegerDict
 * Dictionary of typeInteger structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/15/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeIntegerDict_DEF
#define typeIntegerDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeIntegerDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	typeInteger** values;

} typeIntegerDict;

#endif
