/**
 * typeRegExpInstList
 * List of typeRegExpInst structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/20/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExpInstList_DEF
#define typeRegExpInstList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeRegExpInst.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExpInstList {
	LISTMEMBERS;

	// The type of items in the list
	typeRegExpInst** list;

} typeRegExpInstList;

#endif
