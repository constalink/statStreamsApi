/**
 * Buffer
 * Creates a typeBuffer value and returns a pointer to it
 *
 * This function allocates a new typeBuffer value using the passed in data value
 * and tracks it on the current memory stack. The new value has the
 * startPos and endPos properties set to 0
 *
 * A typeBuffer value is used to hold a data as well as byte positions that
 * track where the start and end position of readable data is. It's useful for
 * keeping track of incoming data streams where the number of bytes that's
 * coming in may not line up perfectly with the number of bytes we want to read
 * when processing that data. Buffer values help by allowing us to buffer large
 * chunks of data while keeping track of smaller data reads.
 *
 * @param buffer A pointer to the typeData buffer to add
 * @return       A pointer to a new typeBuffer value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Buffer_Header_DEF
#define Buffer_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeBuffer.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBuffer* Buffer(typeData* buffer);

#endif
