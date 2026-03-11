/**
 * ConvertDataToBool
 * Converts a string value to a bool value
 *
 * If the data argument that's passed in contains "true" or "false" (case insensitive)
 * Then the corresponding boolean reference is returned. If the string doesn't contain
 * "true" or "false", then an empty reference is returned
 *
 * If successful, the return value will be a typeValueRef value with the type
 * property set to enValueRefTypeBool and the value property set to a boolean value
 * pointer that's either true or false depending on the contents of the string.
 *
 * If not successful, then an empty reference is returned. This is different from the
 * boolean false value. Rather, it'll be a typeValueRef value where the type property
 * is set to enValueRefTypeEmpty and the value property is set to NULL
 *
 * @param data A pointer to the string to convert
 * @return     Either a pointer to a boolean reference or a pointer to an empty reference
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/17/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertDataToBool_Header_DEF
#define ConvertDataToBool_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertDataToBool(typeData* data);

#endif
