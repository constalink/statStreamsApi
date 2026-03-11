/**
 * EndsWith
 * Whether or not a typeData value ends with another typeData value
 * This function compares two typeData values and returns true if
 * the data value ends with the postfix value.
 *
 * @param data    A typeData pointer to compare against
 * @param postfix The postfix typeData pointer to compare against
 * @return        true if the data value ends with the postfix value or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef EndsWith_Header_DEF
#define EndsWith_Header_DEF

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
typeBool EndsWith(typeData* data, typeData* postfix);

#endif
