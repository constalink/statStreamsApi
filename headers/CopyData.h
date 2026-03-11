/**
 * CopyData
 * Copies a data object. This function creates a new typeData value of the same length
 * and copies all bytes from the original value into the new value. This function
 * does not modify the original typeData value
 *
 * @param data The typeData value to copy
 * @return     A new typeData value that has an identical length and identical data to the original data object
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyData_Header_DEF
#define CopyData_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* CopyData(typeData* data);

#endif
