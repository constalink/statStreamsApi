/**
 * SetKey
 * Sets a key / value pair for a dictionary and returns the new dictionary that includes
 * the new key / value pair. This function does not modify the original dictionary
 * but rather, it creates a brand new dictionary that includes the new key/value pair.
 *
 * If the key already exists in the original dictionary, then the new dictionary will
 * contain the new value for that key instead of the old value... so the old value
 * is simply replaced with the new value. In this case, the original key is kept and
 * the new key that's passed into this function is not used in the dictionary... keep
 * that in mind for memory management when calling this function.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new dictionary
 * and original dictionary will share pointers to the keys and values they contain.
 *
 * This function expects a typeDict based pointer as the dict argument and a typeValue
 * based pointer as the value argument. The function signature is written with void* pointers
 * so that any dictionary that derives from the typeDict typedef can be passed in as
 * the dict argument and any value that derives from the typeValue typedef can be passed
 * in as the value argument without a type cast. And even though the return value will be
 * another typeDict pointer, it is also written with a void* pointer so that return values
 * are automatically type cast to the expected output type.
 *
 * You must take care to pass in a supported typeDict based value for the dict argument
 * and a supported typeValue based value for the value argument and you must take
 * care to assign the return value to a typeDict based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param dict  A pointer to the typeDict based dictionary to perform the operation on
 * @param key   A pointer to the key to set
 * @param value A pointer to the typeValue based value to set into the dictionary
 * @return      A pointer to the new dictionary that has the new key/value pair
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetKey_Header_DEF
#define SetKey_Header_DEF

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
void* SetKey(void* dict, typeData* key, void* value);

#endif
