/**
 * Keys
 * Returns a list of typeData keys from a dictionary
 *
 * This function expects a typeDict based pointer as the dict argument.
 * The function signature is written with a void* pointer so that any value
 * thats derived from the typeDict typedef can simply be passed into this
 * function without a type cast.
 *
 * You must take care to pass in a supported typeDict based value or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param dict The value to check
 * @return     A typeDataList pointer that contains all the keys of the dictionary
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Keys_Header_DEF
#define Keys_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDataList* Keys(void* dict);

#endif
