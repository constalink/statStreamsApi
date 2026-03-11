/**
 * IndexItem
 * Returns the list item at a given zero based index
 * This function supports negative indexes. If the index falls outside
 * the bounds of the list, then NULL is returned
 *
 * This function expects a typeList based pointer as the list argument.
 * The function signature is written with a void* pointer so that any
 * list that derives from the typeList typedef can simply be passed into
 * this function without a type cast. And even though the return value will
 * be a typeValue pointer, it is also written with a void* pointer so that
 * return values are automatically type cast to the expected output type
 *
 * You must take care to pass in a supported typeList based value and you must
 * take care to assign the return value to a typeValue based value as well
 * or you'll most likely end up with buffer overflows or segmentation faults
 *
 * @param list  A pointer to a typeList
 * @param index The zero based index of the element to return
 * @return      The value at the specified index which, if it exists will be
 *              a pointer to a typeValue based value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexItem_Header_DEF
#define IndexItem_Header_DEF

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
void* IndexItem(void* list, intmax_t index);

#endif
