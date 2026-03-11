/**
 * KeyValue
 * Returns the typeValue based value thats associated with a given key
 * This function performs a hash based lookup of the key and if found
 * returns the value that's associated with that key. The hashed
 * based lookup process makes key/value lookups many times faster than
 * iterating through keys and comparing them in a linear fashion, especially
 * for larger dictionaries. If the value is found then a pointer to the
 * value is returned, otherwise, NULL is returned.
 *
 * This function expects a typeDict based pointer as the dict argument.
 * The function signature is written with a void* pointer so that any
 * dictionary thats derived from the typeDict typedef can simply be passed
 * into this function without a type cast. And even though the return value
 * will be a typeValue* based pointer, it is also written with a void* pointer
 * so that return values are automatically type cast to the expected output type.
 *
 * You must take care to pass in a supported typeDict based value for the dict
 * argument and you must take care to assign the return value to a typeValue
 * based value as well or you'll likely end up with buffer overflows or
 * segmentation faults
 *
 * @param dict A pointer to the typeDict based dictionary to search
 * @param key  A pointer to the typeData key to search for
 * @return     A pointer to the typeValue based value that's associated with the specified key
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef KeyValue_Header_DEF
#define KeyValue_Header_DEF

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
void* KeyValue(void* dict, typeData* key);

#endif
