/**
 * HasKey
 * Whether or not a dictionary has a specified key
 * Comparison is made by byte comparison, not by pointer address comparison
 * This means that this function will return true if the given key exists
 * in the dictionary even if the typeData value that's passed in isn't the
 * same typeData key value in the dictionary. They just have to have the same
 * length and bytes.
 *
 * This function expects a typeDict based pointer as the dict argument.
 * The function signature is written with a void* pointer so that any dictionary
 * that derives from the typeDict typedef can be passed into this function
 * without a type cast.
 *
 * You must take care to pass in a supported typeDict value or you'll most likely
 * end up with buffer overflows and segmentation faults
 *
 * @param dict A pointer to the dictionary to search
 * @param key  A pointer to the typeData key to search for
 * @return     true if the key exists in the dictionary or false otherwise
 *
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HasKey_Header_DEF
#define HasKey_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool HasKey(void* dict, typeData* key);

#endif
