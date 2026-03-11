/**
 * BoolToJson
 * Converts a boolean value to a JSON string
 *
 * This function takes a pointer to a boolean value, not a boolean value itself
 * The boolVal argument is written as a void* pointer so that this function
 * conforms to the typeItemToJsonFunc typedef
 *
 * Here is an example of how to call this function
 *
 * typeBool boolVal = true;
 *
 * // boolString will be "true"
 * typeData* boolString = BoolToJson(&boolVal);
 *
 * @param boolVal A pointer to a boolean value
 * @return        A pointer to a typeData value that contains the JSON encoded string
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BoolToJson_Header_DEF
#define BoolToJson_Header_DEF

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
typeData* BoolToJson(void* boolVal);

#endif
