/**
 * IndexOfItem
 * Returns the index of a given item in a list
 * Comparison is only done by pointer address. In other words, the 2 items must be the same item and
 * not different items that are equal or have the same data
 *
 * This function expects a a typeList based pointer as the list argument and a
 * typeValue based pointer as the item argument. The function signature is written
 * with void* pointers so that any list thats derived from the typeList typedef
 * can be assigned to the list argument and any value thats derives from the typeValue
 * typedef can be assigned to the item argument without type casts.
 *
 * You must take care to pass in supported typeList and typeValue based values or
 * you'll most likely end up with buffer overflows or segmentation faults
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IndexOfItem_Header_DEF
#define IndexOfItem_Header_DEF

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
intmax_t IndexOfItem(void* list, void* item);

#endif
