/**
 * IsList
 * Tells whether or not a value is a list
 * This function simply checks the flags property to see if the LIST flag is set.
 * See typeList.h - that's where the LIST flag is defined
 * The LIST flag is usually only set by the List function... the function that's
 * responsible for creating list values.
 *
 * This function expects a typeValue based pointer as the value argument.
 * The function signature is written with a void* pointer so that any value
 * thats derived from the typeValue typedef can simply be passed into this
 * function without a type cast.
 *
 * You must take care to pass in a supported typeValue based value or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * @param value The value to check
 * @return      true if the DICT flag is set or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsList_Header_DEF
#define IsList_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsList(void* list);

#endif
