/**
 * Push
 * Pushes 1 or more typeValue based values onto the end of a list.
 * This function does not modify the original list, but rather,
 * it creates a brand new list that contains the new item at the end.
 *
 * This function allocates a new typeList value using the passed in arguments
 * and tracks it on the current memory stack
 *
 * This function takes a variable number of arguments. The first argument is a
 * pointer to the list we want to push values onto. The 2nd argument is the
 * number of typeValue based pointers we want to push onto the end of the list,
 * and every argument after that should be a pointer to a typeValue based value
 * that we want to push onto the end of the list.
 *
 * Here is an example of how to call this function
 * // Lets say that our list is stored in myList. This statement
 * // pushes 2 values onto the end of myList and returns the new list
 * typeList* newList = Push(myList, 2, String("New"), String("Values"));
 *
 * IMPORTANT: This function does not do a deep copy. This means that the
 * new list and original list will share pointers to the elements they contain.
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
 * @param list     A pointer to the original list
 * @param newItems The number of new values to add to the list. This should be 1 or more
 *                 If you pass in zero or less, then the original list is returned
 * @param ...      Zero or more typeValue based pointers. The number of arguments
 *                 should match the newItems parameter
 * @return         A pointer to the new typeList based list with the new values appended to the end
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Push_Header_DEF
#define Push_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void* Push(void* list, intmax_t newItems, ...);

#endif
