/**
 * typeDocumentedTypeDict
 * Dictionary of typeDocumentedType structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/19/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDocumentedTypeDict_DEF
#define typeDocumentedTypeDict_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDict.h"
#include "typeDocumentedType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDocumentedTypeDict {
	DICTMEMBERS;

	// The type of items in the dictionary
	struct typeDocumentedType** values;

} typeDocumentedTypeDict;

#endif
