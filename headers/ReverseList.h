/**
 * ReverseList
 * Reverses the order of the elements in a list
 *
 * This function does not modify the original list, but rather, it
 * creates a brand new list and copies pointers into it in reverse order.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the
 * new list and the original list will share pointers to the elements they contain.
 *
 * This function expects a typeList based pointer as the list argument and returns
 * a typeList based pointer. The function signature is written with a void* pointer
 * so that any list that derives from the typeList typedef can simply be passed
 * into this function without a type cast. And even though the return value
 * will be another typeList pointer, it is also written with a void* pointer so that
 * return values are automatically type cast to the expected output type
 *
 * You must take care to pass in a supported typeList based value and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list A pointer to the original list to reverse
 * @return     A pointer to the reversed list
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/6/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReverseList_Header_DEF
#define ReverseList_Header_DEF

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
void* ReverseList(void* list);

#endif
