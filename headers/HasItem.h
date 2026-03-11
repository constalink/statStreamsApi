/**
 * HasItem
 * Whether or not a list has a given item. Comparison is made by
 * pointer address comparison, not by value comparison. This means
 * that this function will only return true if the exact pointer is
 * in the list
 *
 * This function expects a typeList based pointer as the list argument
 * and it expects a typeValue based pointer for the item argument.
 * The function signature is written with a void* pointer so that any list
 * that derives from the typeList typedef and any value that derives from
 * the typeValue typedef can be passed into this function without a type cast
 *
 * You must take care to pass in supported typeList and typeValue based values
 * or you'll must likely end up with buffer overflows and segmentation faults
 *
 * @param list A pointer to the list to search
 * @param item A pointer to the value to search for
 * @return     true if the value is in the list or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HasItem_Header_DEF
#define HasItem_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool HasItem(void* list, void* item);

#endif
