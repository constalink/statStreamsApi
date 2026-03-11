/**
 * DeleteIndex
 * Deletes an item from a list at a given index.
 *
 * This function does not modify the list that's passed in, but rather,
 * it creates a new list that is missing the element at the specified index.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new
 * list and original list will share pointers to the elements they contain.
 *
 * This function expects a typeList based pointer as the list argument. The
 * function signature is written with a void* pointer so that any list that
 * derives from the typeList typedef can simply be passed into this function
 * without a type cast. And even though the return value will be another typeList
 * pointer, it is also written with a void* pointer so that return values are
 * automatically type cast to the expected output type
 *
 * You must take care to pass in a supported typeList based value and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list  The original list
 * @param index The zero based index of the element to delete
 * @return      A pointer to the new list without the element that was deleted
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DeleteIndex_Header_DEF
#define DeleteIndex_Header_DEF

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
void* DeleteIndex(void* list, intmax_t index);

#endif
