/**
 * CopyDict
 * Copies a dictionary and returns a pointer to the copy
 *
 * IMPORTANT: This function does not do a deep copy. What it does is create a new
 * typeDict based value and link the existing keys and values from the
 * original dictionary into the new dictionary. This means that the
 * original dictionary and the new dictionary share the same underlying
 * pointers to the keys and values they contain.
 *
 * This function expects a typeDict based pointer. The function signature is
 * written with a void* pointer so that any dictionary thats derived from the
 * typeDict typedef can simply be passed into this function without a type cast.
 * And even though the return value will be another typeDict* pointer, it is also
 * written with a void* pointer so that return values are automatically type cast
 * to the expected output type.
 *
 * You must take care to pass in a supported typeDict based value and you must take
 * care to assign the return value to a typeDict based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param dict A pointer to the dictionary to create a copy of
 * @return     A pointer to the new copy of the dictionary
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyDict_Header_DEF
#define CopyDict_Header_DEF

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
void* CopyDict(void* dict);

#endif
