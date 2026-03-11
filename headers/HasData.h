/**
 * HasData
 * Tells whether or not a data list has a given data value
 * Comparison is made by byte comparison, not by pointer address comparison.
 * This means that this function will return true if a given value exists
 * in the list even if the typeData value being passed in isn't the same
 * typeData value in the list. They just have to have the same length and bytes.
 *
 * @param list A pointer to the typeDataList value to search
 * @param data A pointer to the typeData value to search for
 * @return     true if the value exists in the list or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HasData_Header_DEF
#define HasData_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool HasData(typeDataList* list, typeData* data);

#endif
