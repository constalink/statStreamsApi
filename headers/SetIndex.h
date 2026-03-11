/**
 * SetIndex
 * Sets the value of a given index of a list. This function returns
 * a brand new list and the original list is left as is, unchanged.
 * If the index given is negative, the effective index is determined by counting backward from the end.
 * If the index is beyond the bounds of the list, the original list is returned, unchanged.
 *
 * IMPORTANT: If you want to update a list in place without creating a new list,
 * you'll want to call the SetIndexInPlace function. Don't just update the value
 * or reference counts will be wrong and stack based memory management will break.
 * The SetIndexInPlace function takes care of making sure that element reference
 * counts are correct and stack based memory management works properly
 *
 * // Don't do this
 * theList->list[1] = element;
 *
 * // Instead, do this
 * SetIndexInPlace(theList, element, 1);
 *
 * IMPORTANT: This functoin does not do a deep copy. This means that the new
 * list and the original list will share pointers to the elements they contain.
 *
 * This function expects a typeList based pointer as the list argument and a typeValue
 * based pointer as the newItem argument. The function signature is written with void* pointers
 * so that any list that derives from the typeList typedef can be passed in as the list argument
 * and any value that derives from the typeValue typedef can be passed in as the newItem argument
 * without a type cast. And even though the return value will be another typeList pointer,
 * it is also written with a void* pointer so that return values are automatically type
 * cast to the expected output type.
 *
 * You must take care to pass in a supported typeList based value for the list argument
 * and a supported typeValue based value for the newItem argument and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list    A pointer to the typeList based list to perform the operation on
 * @param newItem A pointer to the typeValue based value to set into the list
 * @param index   The zero based index of the element to replace. Negative indexes are supported
 * @return        A pointer to the new list that has the new element
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/25/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetIndex_Header_DEF
#define SetIndex_Header_DEF

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
void* SetIndex(void* list, void* newItem, intmax_t index);

#endif
