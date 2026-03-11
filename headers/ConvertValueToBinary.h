/**
 * ConvertValueToBinary
 * Converts a value to a binary value
 *
 * If the value that's passed in can be converted to binary, then the return
 * value will be a typeValueRef value with the type property set to
 * enValueRefTypeBinary and the value property set to a typeData value that
 * contains the binary data.
 *
 * If the value cannot be converted to binary, then NULL is returned
 *
 * The following value types can be converted to binary
 * - string
 * - regExp
 * - int
 * - fraction
 * - bool
 * - range
 * - empty
 *
 * @param value A pointer to the value to convert to binary
 * @return      A pointer to the binary value or NULL if the conversion can't be done
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/10/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertValueToBinary_Header_DEF
#define ConvertValueToBinary_Header_DEF

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
typeValueRef* ConvertValueToBinary(typeValueRef* value);

#endif
