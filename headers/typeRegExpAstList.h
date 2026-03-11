/**
 * typeRegExpAstList
 * List of typeRegExpAst structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeRegExpAstList_DEF
#define typeRegExpAstList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeRegExpAst.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeRegExpAstList {
	LISTMEMBERS;

	// The type of items in the list
	struct typeRegExpAst** list;

} typeRegExpAstList;

#endif
