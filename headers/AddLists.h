/**
 * AddLists
 * Concatenates 2 lists together and returns a pointer to a new list
 * This function does not modify the 2 lists passed in. Instead, it creates
 * an entirely new list which contains the elements from both lists
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new
 * list and original lists will share pointers to the elements they contain.
 *
 * This function expects 2 typeList based pointers. The function signature is written
 * with void* pointers so that any list thats derives from the typeList typedef can
 * simply be passed into this function without a type cast. And even though the return
 * value will be another typeList pointer, it is also written with a void* pointer so
 * that return values are automatically type cast to the expected output type
 *
 * You must take care to pass in supported typeList based values and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list    A pointer to the original list
 * @param addList A pointer to the list to add
 * @return        A new list that contains the elements of both lists
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddLists_Header_DEF
#define AddLists_Header_DEF

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
void* AddLists(void* list, void* addList);

#endif
