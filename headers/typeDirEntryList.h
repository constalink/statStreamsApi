/**
 * typeDirEntryList
 * List of typeDirEntry structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/24/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDirEntryList_DEF
#define typeDirEntryList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeDirEntry.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDirEntryList {
	LISTMEMBERS;

	// The type of items in the list
	typeDirEntry** list;

} typeDirEntryList;

#endif
