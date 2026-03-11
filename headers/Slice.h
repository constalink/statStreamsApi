/**
 * Slice
 * Returns a slice of a list. The result is a list that includes the element at the
 * start index and ends just before the end index thats specified.
 * - The result does not include the end index.
 * - If the start or end index is negative, it starts counting backward from the end.
 * - If the end index is 0, it goes all the way to the end.
 * - If an index exceeds the boundaries of the list, it will be transformed to the end boundary.
 * - If the end index is before the start index, no elements are included.
 *
 * Here are some pseudocode examples:
 *
 * Given the following list:
 * list = [a, b, c, d, e, f]
 *
 * These are the results:
 * Slice(list, 0, 3) = [a, b, c]
 * Slice(list, 1, 3) = [b, c]
 * Slice(list, -3, -1) = [d, e]
 * Slice(list, 0, 0) = [a, b, c, d, e, f]
 * Slice(list, 50, 0) = []
 * Slice(list, -50, 0) = [a, b, c, d, e, f]
 * Slice(list, 0, -50) = [];
 * Slice(list, 0, 50) = [a, b, c, d, e, f]
 * Slice(list, 3, 2) = []
 *
 * This function does not modify the original list that's passed in
 * but rather, it creates a brand new list that contains the slice.
 *
 * IMPORTANT: This function does not do a deep copy. This means that the new
 * list and original lists will share pointers to the elements they contain.
 *
 * This function expects a typeList based pointer as the list argument. The
 * function signature is written with a void* pointer so that any list thats
 * derived from the typeList typedef can simply be passed into this function
 * without a type cast. And even though the return value will be another
 * typeList pointer, it is also written with a void* pointer so that return
 * values are automatically type cast to the expected output type.
 *
 * You must take care to pass in a supported typeList based value and you must take
 * care to assign the return value to a typeList based value as well or you'll most
 * likely end up with buffer overflows or segmentation faults
 *
 * @param list       A pointer to the list to create the slice from
 * @param startIndex The zero based index to start the slice at
 * @param endIndex   The zero based index to end the slice ast.
 *                   The element at this index is not included in the slice
 * @return           A pointer to a list that contains the slice
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/10/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Slice_Header_DEF
#define Slice_Header_DEF

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
void* Slice(void* list, intmax_t startIndex, intmax_t endIndex);

#endif
