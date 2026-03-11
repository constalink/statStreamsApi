/**
 * ListToJson
 * Converts a list to a JSON string
 *
 * This function expects a pointer to a typeList based value as the list argument.
 * The function is written with a void* pointer so that any list thats
 * derived from the typeList typedef can be passed into this function without a type cast.
 *
 * You must take care to only pass in typeList based values or you'll most
 * likely end up with buffer overflows or segmentation faults.
 *
 * The childrenToJsonFunc argument expects a function that will be called
 * against each element in the list and is expected to return a JSON encoded
 * string for each element.
 *
 * @param dict               A pointer to a typeList base value to encode
 * @param childrenToJsonFunc A pointer to a function to use to encode each element in the list
 * @return                   A pointer to a typeData value that contains the JSON encoded result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ListToJson_Header_DEF
#define ListToJson_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeItemToJsonFunc.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* ListToJson(void* list, typeItemToJsonFunc* childrenToJsonFunc);

#endif
