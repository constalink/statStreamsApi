/**
 * typeMatchIndexList
 * List of typeMatchIndex structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/3/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchIndexList_DEF
#define typeMatchIndexList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeMatchIndex.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMatchIndexList {
	LISTMEMBERS;

	// The type of items in the list
	typeMatchIndex** list;

} typeMatchIndexList;

#endif
