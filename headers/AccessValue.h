/**
 * AccessValue
 * Retrieves the value at the specified index from the given list value reference.
 * The following value / index combinations are accepted. Anything else will return NULL
 *
 * ---------------------------------------------------------------------------------------------------
 * | value type | index type    | returns                                                            |
 * |------------|---------------|--------------------------------------------------------------------|
 * | enum       | string        | A string that represents the matching enum choice                  |
 * | struct     | string        | The value at that key in the struct                                |
 * | string     | int (1 based) | The character at the given index as a string (possibly multi-byte) |
 * | string     | range         | A sub string of characters that are within the indexed range       |
 * | binary     | int (1 based) | A single byte at the given index as a binary                       |
 * | binary     | range         | A sub binary of bytes that are within the indexed range            |
 * | list       | int (1 based) | The value at the specified index                                   |
 * | list       | range         | A sub list of elements that are withint the indexed range          |
 * ---------------------------------------------------------------------------------------------------
 *
 * @param value  A reference to a enum, struct, string, binary, or list value.
 * @param index  The index of the value to access. Must be a value type that matches one of the pairs above
 * @return       The value for the specified index or NULL if not found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/7/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AccessValue_Header_DEF
#define AccessValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* AccessValue(typeValueRef* value, typeValueRef* index);

#endif
