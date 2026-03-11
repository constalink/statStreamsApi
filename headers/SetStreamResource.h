/**
 * SetStreamResource
 * Sets a stream resource value.
 *
 * This function takes a pointer to a typeValue based resource
 * and sets it as the stream->resource property. It also takes
 * care of elevating the resource to be tracked on the
 * same memory stack as the streamValue itself and frees the
 * old resource if it exists and there are no other references to it.
 *
 * If you pass NULL as the resource argument, then the previous
 * resource is cleared and freed if there are no other
 * references to it.
 *
 * IMPORTANT: This function will attempt to free the previous resource if
 * there are no other references to it
 *
 * IMPORTANT: This function expects a typeValue based pointer as the
 * resource argument. The function signature is coded as a void* pointer
 * so that any typeValue based value can be passed in without a type cast.
 * You must take care to only pass in a typeValue based pointer or
 * you'll end up with memory errors, buffer overflows, or segmentation faults.
 *
 * @param stream   A pointer to the stream to set the error message for
 * @param resource A pointer to the new resource to set or
 *                 NULL if you want to clear the resource
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SetStreamResource_Header_DEF
#define SetStreamResource_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeStreamValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void SetStreamResource(typeStreamValue* stream, void* resource);

#endif
