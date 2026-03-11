/**
 * MultiplyValues
 * Multiplies two values and returns the result. The values should be value types
 * that can be multiplied. If not, then NULL will be returned. Here is a table of
 * the types of values that can be multiplied and what the return value type will be:
 *
 * ---------------------------------------------------------------------------------------------
 * | value1 type | value2 type | return type | notes                                           |
 * |-------------|-------------|-------------|-------------------------------------------------|
 * | int         | int         | int         | The product of multiplying the 2 integers       |
 * | int         | fraction    | fraction    | The product of multiplying the 2 numbers        |
 * | fraction    | int         | fraction    | The product of multiplying the 2 numbers        |
 * | fraction    | fraction    | fraction    | The product of multiplying the 2 fractions      |
 * | string      | int         | string      | A string repeated a number of times             |
 * | binary      | int         | binary      | A binary repeated a number of times             |
 * | list        | int         | list        | A list with elements repeated a number of times |
 * ---------------------------------------------------------------------------------------------
 *
 * @param value1 A pointer to the first value to multiply
 * @param value2 A pointer to the second value to multiply
 * @return       A pointer to the resultant value or NULL if the values can't be multiplied
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/18/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyValues_Header_DEF
#define MultiplyValues_Header_DEF

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
typeValueRef* MultiplyValues(typeValueRef* value1, typeValueRef* value2);

#endif
