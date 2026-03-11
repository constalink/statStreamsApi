/**
 * NullToJson
 * Converts a null value to a JSON string
 *
 * This function expects you to pass NULL as the nullVal argument.
 * The nullVal argument is written as a void* pointer so that this function
 * conforms to the typeItemToJsonFunc typedef
 *
 * Here is an example of how to call this function
 *
 * // The result will be "null"
 * typeData* result = NullToJson(NULL);
 *
 * @param nullVal Should be NULL. If it's not, it's just ignored anyway
 * @return        A pointer to a typeData value that contains "null"
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NullToJson_Header_DEF
#define NullToJson_Header_DEF

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
typeData* NullToJson(void* nullVal);

#endif
