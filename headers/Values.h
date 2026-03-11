/**
 * Values
 * Returns a list of typeValue based from a dictionary
 *
 * This function expects a typeDict based pointer as the dict argument.
 * The function signature is written with a void* pointer so that any value
 * thats derived from the typeDict typedef can simply be passed into this
 * function without a type cast. And even though the return value will be
 * a typeList based pointer, it is also written with a void* pointer so that
 * return values are automatically type cast to the expected output type.
 *
 * You must take care to pass in a supported typeDict based value and you must take
 * care to assign the return value to a typeList based value as well or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param dict The value to check
 * @return     A typeList pointer that contains all the typeValue based values of the dictionary
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Values_Header_DEF
#define Values_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void* Values(void* dict);

#endif
