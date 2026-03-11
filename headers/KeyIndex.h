/**
 * KeyIndex
 * Returns the index for a given dictionary key
 *
 * Dictionary keys are indexed just like any other list. This function
 * takes a dictionary and a key and returns the zero based index of
 * a key that matches the key that's passed into this function.
 * The key is compared by byte comparison not by pointer comparison
 * so the key that you pass in doesn't have to be the exact same key value,
 * it just has to match the length and bytes of the key you're searching for.
 * If the key is found, then the index is returned otherwise, -1 is returned.
 *
 * This function doesn't iterate through keys linearly. Instead it performs
 * a hash based lookup of the key which makes it many times faster. This
 * function is used as the basis for key/value lookups with the KeyValue function.
 *
 * This function expects a typeDict based pointer as the value argument.
 * The function signature is written with a void* pointer so that any value
 * thats derived from the typeDict typedef can simply be passed into this
 * function without a type cast.
 *
 * You must take care to pass in a supported typeDict based value or you'll
 * most likely end up with buffer overflows or segmentation faults.
 *
 * @param dict A pointer to the typeDict based dictionary to search
 * @param key  A pointer to the key to search for
 * @return     The zero based index of the key or -1 if the key isn't found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef KeyIndex_Header_DEF
#define KeyIndex_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

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
intmax_t KeyIndex(void* dict, typeData* key);

#endif
