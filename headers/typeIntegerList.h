/**
 * typeIntegerList
 * List of typeInteger structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/15/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeIntegerList_DEF
#define typeIntegerList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeList.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeIntegerList {
	LISTMEMBERS;

	// The type of items in the list
	typeInteger** list;

} typeIntegerList;

#endif
