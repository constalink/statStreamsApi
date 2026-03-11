/**
 * ConvertValue
 * Converts a value from one type to another
 *
 * If the value type already matches the toType, then the original value is returned.
 *
 * This function expects the from argument and a toType argument that are compatible.
 * In other words, the from value type must be able to be converted to the toType.
 * If the conversion can't be done or makes no sense, then NULL is returned. The following
 * value types and data types are compatable.
 *
 * -----------------------------------------------
 * | value type | toType     | result type       |
 * |------------|------------|-------------------|
 * | string     | binary     | binary            |
 * | string     | int        | int or empty      |
 * | string     | fraction   | fraction or empty |
 * | string     | bool       | bool or empty     |
 * | string     | regExp     | regExp or empty   |
 * | string     | range      | range or empty    |
 * | string     | enumOption | string or empty   |
 * | binary     | string     | string or empty   |
 * | binary     | int        | int               |
 * | binary     | fraction   | fraction or empty |
 * | binary     | bool       | bool or empty     |
 * | binary     | regExp     | regExp or empty   |
 * | binary     | range      | range or empty    |
 * | binary     | enumOption | string or empty   |
 * | regExp     | string     | string or empty   |
 * | regExp     | int        | int               |
 * | regExp     | fraction   | fraction or empty |
 * | regExp     | bool       | bool or empty     |
 * | regExp     | binary     | binary            |
 * | regExp     | range      | range or empty    |
 * | regExp     | enumOption | string or empty   |
 * | int        | string     | string            |
 * | int        | binary     | binary            |
 * | int        | fraction   | fraction          |
 * | int        | bool       | bool or empty     |
 * | fraction   | string     | string            |
 * | fraction   | binary     | binary            |
 * | fraction   | int        | int or empty      |
 * | fraction   | bool       | bool or empty     |
 * | bool       | string     | string            |
 * | bool       | binary     | binary            |
 * | bool       | int        | int               |
 * | bool       | fraction   | fraction          |
 * | range      | string     | string            |
 * | range      | binary     | binary            |
 * | range      | [int]      | [int] or empty    |
 * | enum       | [string]   | [string]          |
 * | enum       | [binary]   | [binary]          |
 * | empty      | string     | string            |
 * | empty      | binary     | binary            |
 * -----------------------------------------------
 *
 * This function also handles converting lists, dictionaries, and structs
 * to other types recursively as long as the sub type(s) agree.
 * For example, these conversions are all possible
 *
 * [binary] to: [int]
 * [int] to: [string]
 * {binary} to: {int}
 * {int} to: {string}
 * {key1: int, key2: int} to: {key1: string, key2: int}
 * {key1: int, key2: int} to: {key1: string, key2: string}
 * {key1: int, key2: int} to: {string}
 *
 * @param from   A pointer to the value to convert
 * @param toType A pointer to the data type to convert to
 * @return       A pointer to the converted value or NULL if the conversion isn't supported
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/13/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ConvertValue_Header_DEF
#define ConvertValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeType.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeValueRef* ConvertValue(typeValueRef* from, typeType* toType);

#endif
