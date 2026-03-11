/**
 * ConvertValueToString
 * Converts a value to a string value
 *
 * If the value that's passed in can be converted to a string, then the return
 * value will be a typeValueRef value with the type property set to
 * enValueRefTypeString and the value property set to a typeStringValue value that
 * contains the string data.
 *
 * If the value cannot be converted to a string, then NULL is returned
 *
 * The following value types can be converted to a string
 * - binary (If a binary can't be converted to a string, then the empty ref is returned)
 * - regExp
 * - int
 * - fraction
 * - bool
 * - range
 * - empty
 *
 * @param value A pointer to the value to convert to a string
 * @return      A pointer to the string value or NULL if the conversion can't be done
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertValueToString_Header_DEF
#define ConvertValueToString_Header_DEF

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
typeValueRef* ConvertValueToString(typeValueRef* value);

#endif
