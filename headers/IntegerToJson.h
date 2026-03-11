/**
 * IntegerToJson
 * Converts a typeInteger value to a JSON string
 *
 * This function expects a pointer to a typeInteger value as the integer
 * argument. This function was written as a void* pointer to so that this function
 * conforms to the typeItemToJsonFunc typedef
 *
 * This function doesn't return a JSON encoded number, but rather it returns
 * a JSON encoded dictionary that has a "words" key that contains a hex encoded string
 *
 * For example: If you're encoding an integer that contains a single 64 bit word - 3556
 * The return value will be:
 * {"words":"0xde4"}
 *
 * @param integer A pointer to a typeInteger value
 * @return        A pointer to a typeData value that contains the JSON encoded value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/3/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerToJson_Header_DEF
#define IntegerToJson_Header_DEF

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
typeData* IntegerToJson(void* integer);

#endif
