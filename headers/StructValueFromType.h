/**
 * StructValueFromType
 * Returns a struct value from a data type where all the keys have default values
 *
 * This function allocates a new typeValueRefDict value and tracks it on the
 * current memory stack
 *
 * The return value will be a typeValueRefDict pointer that contains all the
 * non-optional keys from the struct type and default values for each
 * of those keys.
 *
 * The dataType that's passed in is automatically unaliased within the function
 * so if you pass an alias to a struct data type, it'll still work. If you pass
 * in a data type that isn't a struct type, then an empty dictionary is returned.
 *
 * IMPORTANT: This function does not do a deep copy of struct keys. This means
 * that the dictionary and original struct type will share pointers to the keys they contain.
 *
 * @param dataType The data type to create a value from. Should be a struct data type
 * @return         A pointer to to the dictionary value that was created
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StructValueFromType_Header_DEF
#define StructValueFromType_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeValueRefDict.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRefDict* StructValueFromType(typeType* dataType);

#endif
