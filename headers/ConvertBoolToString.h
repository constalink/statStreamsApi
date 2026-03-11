/**
 * ConvertBoolToString
 * Converts a boolean value to a string value
 *
 * This function returns a string that contains the sequence "false" or "true"
 * depending on the value of the boolVal argument that's passed in.
 *
 * The return value will be a typeValueRef value with the
 * type property set to enValueRefTypeString and the value property set to
 * a pointer to a typeStringValue value that contains either "false" or "true"
 *
 * @param boolVal A pointer to the boolean value that we want to convert
 * @return        A pointer to the string value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertBoolToString_Header_DEF
#define ConvertBoolToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValueRef.h"
#include "typeBoolValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertBoolToString(typeBoolValue* boolVal);

#endif
