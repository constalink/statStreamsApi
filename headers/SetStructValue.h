/**
 * SetStructValue
 * Sets the value of a typeValue based struct property.
 * This function property handles incrementing the reference count of the value being set as well as
 * decrementing the reference count of the value being replaced if any.
 *
 * You should use this function to set typeValue based struct properties
 * so that stack based memory management works properly otherwise, you'll run into memory issues.
 *
 * This function expects a typeValue** based pointer to a pointer as well as a
 * typeValue* based pointer. The function signature is written with a void* pointer
 * so that any value thats derived from the typeValue typedef can simply be passed into this
 * function without a type cast.
 *
 * You must take care to pass in supported typeValue based pointers or you'll
 * most likely end up with buffer overflows or segmentation faults
 *
 * The proper use of this function can be confusing. Here is an example of the proper
 * way to call this function:
 *
 * // Don't do this
 * value->property = propertyValue;
 *
 * // Instead do this
 * SetStructValue((typeValue**) &value->property, propertyValue);
 *
 * You have to cast &value->property to a typeValue** for this function to work properly
 *
 * @param pointer A pointer to a typeValue property pointer
 * @param value   The value to set for the property
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetStructValue_Header_DEF
#define SetStructValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void SetStructValue(typeValue** pointer, void* value);

#endif
