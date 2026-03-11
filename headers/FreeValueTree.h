/**
 * FreeValueTree
 * Frees a value and all typeValue based children as long as they have no other references
 * This function takes a typeValue based pointer and looks at all typeValue based
 * properties of the struct. It then recursively calls FreeValueTree on all those property
 * values.
 *
 * This function implements circular reference recursion protection so if you call
 * this function on a value that has a circular reference, it won't loop forever
 *
 * If a value or a any child recursively has a non zero reference count, the recursion
 * stops from proceeding further down the tree and the value isn't freed.
 *
 * This function expects a typeValue* based pointer. The function signature is
 * written with a void* pointer so that any value thats derived from the typeValue
 * typedef can simply be passed into this function without a type cast.
 *
 * You must take care to pass in a typeValue based pointer or you'll most likely
 * end up with buffer overflows or segmentation faults
 *
 * @param value The typeValue based value to free
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/19/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FreeValueTree_Header_DEF
#define FreeValueTree_Header_DEF

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
void FreeValueTree(void* value);

#endif
