/**
 * Insert
 * Insert a value into a list at a given index. This function returns
 * a brand new list and the original list is left as is, unchanged.
 * If the index given is negative, the effective index is determined by counting backward from the end.
 * If the index is beyond the bounds of the list, the item is inserted at either
 * the beginning of the list or the end of the list depending on which side the
 * effective index overshot.
 *
 * IMPORTANT: This function does not do a deep copy. The original list and the
 * new list will share pointers to the elements they contain
 *
 * This function expects a typeList base pointer as the list argument and a
 * typeValue based pointer as the newItem argument. The function signature
 * is written with void* pointers so that any list thats derived from the typeList
 * typedef and any value thats derived from the typeValue typedef can be passed
 * into this function without a type cast. And even though the return value
 * will be a typeList pointer, it is also written with a void* pointer so that
 * return values are automatically type cast to the expected output type
 *
 * You must take care to pass in a supported typeList pointer as the list argument
 * and a typeValue based pointer as the newItem argument and you must take care
 * to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list    A pointer to the typeList based list to insert the value into
 * @param newItem A pointer to the typeValue based item to insert into the list
 * @param atIndex The zero based index to insert the new value at. Negative indexes are supported
 * @return        A pointer to the new typeList that contains the newItem at the specified index
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Insert_Header_DEF
#define Insert_Header_DEF

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
void* Insert(void* list, void* newItem, intmax_t atIndex);

#endif
