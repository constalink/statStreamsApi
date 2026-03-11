/**
 * AddDicts
 * Adds 2 dictionaries together and returns a pointer to the new dictionary
 * This function does not modify the 2 dictionaries passed in. Instead, it creates
 * an entirely new dictionary and adds keys from the first dictionary, then adds
 * keys from the 2nd dictionary. Keys from the 2nd dictionary overwrite keys from
 * the first dictionary if they match.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new dictionary
 * and original dictionaries will share pointers to the keys and values they contain.
 *
 * This function expects 2 typeDict based pointers. The function signature is written
 * with void* pointers so that any dictionary thats derived from the typeDict typedef
 * can simply be passed into this function without a type cast. And even though the return
 * value will be another typeDict* pointer, it is also written with a void* pointer so that
 * return values are automatically type cast to the expected output type.
 *
 * You must take care to pass in supported typeDict based values and you must take
 * care to assign the return value to a typeDict based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param dict    The original dictionary
 * @param addDict The dictionary to add
 * @return        A new dictionary that has key / value pairs from both dictionaries
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddDicts_Header_DEF
#define AddDicts_Header_DEF

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
void* AddDicts(void* dict, void* addDict);

#endif
