/**
 * CopyList
 * Copies a list and returns a pointer to the copy
 *
 * IMPORTANT: This function doe not do a deep copy. What it does is create a new
 * typeList based value and link the existing values from the original
 * list into the new list. This means that the original list and the new
 * list share the same underlying pointers to the values they contain
 *
 * This function expects a typeList based pointer. The function signature is
 * written with a void* pointer so that any list thats derived from the
 * typeList typedef can simply be passed into this function without a type cast.
 * And even though the return value will be another typeList pointer, it is also
 * written with a void* pointer so that return values are automatically type cast
 * to the expected output type.
 *
 * You must take care to pass in a supported typeList based value and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list A pointer to the list to create a copy of
 * @return     A pointer to the new copy of the list
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/30/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CopyList_Header_DEF
#define CopyList_Header_DEF

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
void* CopyList(void* list);

#endif
