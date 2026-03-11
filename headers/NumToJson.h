/**
 * NumToJson
 * Converts a number into a JSON string
 *
 * This function expects a pointer to a int64_t value as the num argument.
 * The function is written with a void* pointer so that this function
 * conforms to the typeItemToJsonFunc typedef
 *
 * You must take care to only pass in a pointer to a int64_t or you'll most
 * likely end up with buffer overflows or segmentation faults.
 *
 * Here's an example of how to call this function
 *
 * int64_t num = 1234;
 * // The result will be "1234"
 * typeData* result = NumToJson(&num);
 *
 * @param num A pointer to an int64_t number to encode
 * @return    A pointer to a typeData value that contains the JSON encoded result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NumToJson_Header_DEF
#define NumToJson_Header_DEF

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
typeData* NumToJson(void* num);

#endif
