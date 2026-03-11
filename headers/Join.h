/**
 * Join
 * Joins a list of data objects into a single data object with
 * a specified "glue" in between each value.
 *
 * This function creates a brand new typeData value and copies the bytes
 * of each data value in the list into the new typeData value
 *
 * @param list A pointer to the list to join
 * @param glue A pointer to a typeData value to use as glue between each value in the list
 * @return     A pointer to the joined value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Join_Header_DEF
#define Join_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* Join(typeDataList* list, typeData* glue);

#endif
