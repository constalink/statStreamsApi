/**
 * DatasAreEqual
 * Whether or not 2 data objects contain the same data.
 *
 * This function compares 2 typeData values byte by byte and returns true
 * if the two values are the same length and contain the same data.
 *
 * @param data1 The first typeData value to compare against
 * @param data2 The 2nd typeData value to compare against
 * @return      true if the 2 values are the same length and contain identical data or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DatasAreEqual_Header_DEF
#define DatasAreEqual_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool DatasAreEqual(typeData* data1, typeData* data2);

#endif
