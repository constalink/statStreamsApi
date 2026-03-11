/**
 * typeDataDict
 * Dictionary of typeData values. This dictionary contains
 * typeData keys and typeData values as associated values
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDataDict_DEF
#define typeDataDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDataDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	typeData** values;

} typeDataDict;

#endif
