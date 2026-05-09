/**
 * typeMatchIndexGroupList
 * List of typeMatchIndexGroup structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/3/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchIndexGroupList_DEF
#define typeMatchIndexGroupList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeMatchIndexGroup.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMatchIndexGroupList {
	LISTMEMBERS;

	// The type of items in the list
	typeMatchIndexGroup** list;

} typeMatchIndexGroupList;

#endif
