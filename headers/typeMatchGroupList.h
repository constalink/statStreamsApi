/**
 * typeMatchGroupList
 * List of typeMatchGroup structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/29/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeMatchGroupList_DEF
#define typeMatchGroupList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeMatchGroup.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeMatchGroupList {
	LISTMEMBERS;

	// The type of items in the list
	typeMatchGroup** list;

} typeMatchGroupList;

#endif
