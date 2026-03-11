/**
 * DeleteKey
 * Deletes a key and the associated value from a dictionary
 *
 * This function does not modify the dictionary that's passed in, but rather,
 * it creates a new dictionary that is missing the specified key/value
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new
 * dictionary and original dictionary will share pointers to the keys and values they contain.
 *
 * This function expects a typeDict based pointer as the dict argument. The
 * function signature is written with a void* pointer so that any dictionary that
 * derives from the typeDict typedef can simply be passed into this function
 * without a type cast. And even though the return value will be another typeDict
 * pointer, it is also written with a void* pointer so that return values are
 * automatically type cast to the expected output type
 *
 * You must take care to pass in a supported typeDict based value and you must take
 * care to assign the return value to a typeDict based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param dict  The original dictionary
 * @param key   A pointer to a typeData value that contains the key to delete
 * @return      A pointer to the new dictionary without the key/value that was deleted
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DeleteKey_Header_DEF
#define DeleteKey_Header_DEF

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
void* DeleteKey(void* dict, typeData* key);

#endif
