/**
 * typeDataList
 * List of typeData values. This list contains all typeData values
 * as elements.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/30/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDataList_DEF
#define typeDataList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDataList {
	LISTMEMBERS;

	// The type of items in the list
	typeData** list;

} typeDataList;

#endif
