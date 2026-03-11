/**
 * SubtractValues
 * Subtracts two values and returns the result. The values should be value
 * types that can be subtracted. If not, then NULL will be returned. Here is
 * a table of the types of values that can be subtracted and what the return type will be:
 *
 * ----------------------------------------------------------------------------------------
 * | value type | minusValue type | return type | notes                                   |
 * |------------|-------------    |-------------|-----------------------------------------|
 * | int        | int             | int         | The difference of value and minusValue  |
 * | int        | fraction        | fraction    | The difference of value and minusValue  |
 * | fraction   | int             | fraction    | The difference of value and minusValue  |
 * | fraction   | fraction        | fraction    | The difference of value and minusValue  |
 * | list       | int             | list        | A new list element at the index removed |
 * | dict       | string          | dict        | A new dictionary with the key removed   |
 * | struct     | string          | struct      | A new struct with the key removed       |
 * ----------------------------------------------------------------------------------------
 *
 * @param value      A pointer to a value to subtract from
 * @param minusValue A pointer to a value to subtract
 * @return           A pointer to the result or NULL if the values can't be subtracted
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/19/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SubtractValues_Header_DEF
#define SubtractValues_Header_DEF

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
typeValueRef* SubtractValues(typeValueRef* value, typeValueRef* minusValue);

#endif
