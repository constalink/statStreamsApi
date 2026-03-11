/**
 * DictToJson
 * Converts a dictionary to a JSON string
 *
 * This function expects a pointer to a typeDict based value as the dict argument.
 * The function is written with a void* pointer so that any dictionary thats
 * derived from the typeDict typedef can be passed into this function without a type cast.
 *
 * You must take care to only pass in typeDict based values or you'll most
 * likely end up with buffer overflows or segmentation faults.
 *
 * The childrenToJsonFunc argument expects a function that will be called
 * against each element in the dictionary and is expected to return a JSON encoded
 * string for each element.
 *
 * @param dict               A pointer to a typeDict base value to encode
 * @param childrenToJsonFunc A pointer to a function to use to encode each element in the dictionary
 * @return                   A pointer to a typeData value that contains the JSON encoded result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DictToJson_Header_DEF
#define DictToJson_Header_DEF

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
typeData* DictToJson(void* dict, typeItemToJsonFunc* childrenToJsonFunc);

#endif
