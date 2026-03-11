/**
 * SetIndexInPlace
 * Sets the value of a given index of a list. This function updates the original
 * list in place and doesn't return anything. If the index given is negative,
 * the effective index is determined by counting backward from the end.
 * If the index is beyond the bounds of the list, nothing happens
 *
 * This function makes sure that reference counts are correct so that you can
 * avoid potential memory errors. Don't just update a list element, call this
 * function instead.
 *
 * // Don't do this
 * theList->list[1] = element;
 *
 * // Do this instead
 * SetIndexInPlace(theList, element, 1);
 *
 * This function expects a typeList based pointer as the list argument and a typeValue
 * based pointer as the newItem argument. The function signature is written with void* pointers
 * so that any list that derives from the typeList typedef can be passed in as the list argument
 * and any value that derives from the typeValue typedef can be passed in as the newItem argument
 * without a type cast.
 *
 * You must take care to pass in a supported typeList based value for the list argument
 * and a supported typeValue based value for the newItem argument or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list    A pointer to the typeList based list to perform the operation on
 * @param newItem A pointer to the typeValue based value to set into the list
 * @param index   The zero based index of the element to replace. Negative indexes are supported
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/25/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetIndexInPlace_Header_DEF
#define SetIndexInPlace_Header_DEF

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
void SetIndexInPlace(void* list, void* newItem, intmax_t index);

#endif
