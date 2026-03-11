/**
 * AddValues
 * Adds two values and returns the result. The values should be value types that can
 * be added. If not then NULL will be returned. Here is a table of the
 * types of values that can be added and what the return value type will be:
 *
 * ------------------------------------------------------------------------------------------
 * | value1 type | value2 type | return type | notes                                        |
 * |-------------|-------------|-------------|----------------------------------------------|
 * | string      | string      | string      | A new concatenated string value              |
 * | string      | binary      | binary      | A new concatenated binary value              |
 * | binary      | string      | binary      | A new concatenated binary value              |
 * | binary      | binary      | binary      | A new concatenated binary value              |
 * | list        | list        | list        | A new list with the elements from both lists |
 * | dict        | dict        | dict        | A new dictionary with the values from both   |
 * | int         | int         | int         | The sum of the 2 integers                    |
 * | int         | fraction    | fraction    | The sum of the integer and fraction          |
 * | fraction    | int         | fraction    | The sum of the fraction and integer          |
 * | fraction    | fraction    | fraction    | The sum of the 2 fractions                   |
 * ------------------------------------------------------------------------------------------
 *
 * @param value1 A pointer to the first value to add
 * @param value2 A pointer to the second value to add
 * @return       A pointer to the resultant value or NULL if the values can't be added
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/3/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddValues_Header_DEF
#define AddValues_Header_DEF

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
typeValueRef* AddValues(typeValueRef* value1, typeValueRef* value2);

#endif
