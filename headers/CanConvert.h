/**
 * CanConvert
 * Returns true if a type can be converted to another type, otherwise, it returns false
 *
 * Valid type conversions are as follows: (Please make note of the optionality of each type - ?)
 * string to: binary
 * string to: int?
 * string to: fraction?
 * string to: bool?
 * string to: regExp?
 * string to: range?
 * string to: enumOption?
 *
 * binary to: string?
 * binary to: int
 * binary to: fraction?
 * binary to: bool?
 * binary to: regExp?
 * binary to: range?
 * binary to: enumOption?
 *
 * int to: string
 * int to: binary
 * int to: fraction
 * int to: bool? - false if 0, true if 1, empty otherwise
 *
 * fraction to: string
 * fraction to: binary
 * fraction to: int?
 * fraction to: bool? - false if 0.0, true if 1.0, empty otherwise
 *
 * bool to: string - "true" or "false"
 * bool to: binary
 * bool to: int - 0 for false and 1 for true
 * bool to: fraction 0.0 for false and 1.0 for true
 *
 * regExp to: string?
 * regExp to: binary
 * regExp to: int - The underlying data of a regExp is binary so it can be converted directly to an int just like binary
 * regExp to: fraction?
 * regExp to: bool?
 * regExp to: range?
 * regExp to: enumOption?
 *
 * range to: string
 * range to: binary
 * range to: [int]?
 *
 * enum to: [string]
 * enum to: [binary]
 *
 * enumOption to: string
 * enumOption to: binary
 * enumOption to: int?
 * enumOption to: fraction?
 * enumOption to: bool?
 * enumOption to: regExp?
 * enumOption to: range?
 *
 * And you can convert lists, dictionaries, and structs
 * to other types recursively as long as the sub type(s) agree
 * For example: These conversions are possible
 *
 * [binary] to: [int]
 * [int] to: [string]
 * {binary} to: {int}
 * {int} to: {string}
 * {key1: int, key2: int} to: {key1: string, key2: int}
 * {key1: int, key2: int} to: {key1: string, key2: string}
 * {key1: int, key2: int} to: {string}
 *
 * You can also convert union types if all sub types can convert
 *
 * @param fromType A pointer to the type to convert from
 * @param toType   A pointer to the type to convert to
 * @return         True if the conversion is valid or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/15/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CanConvert_Header_DEF
#define CanConvert_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeType.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool CanConvert(typeType* fromType, typeType* toType);

#endif
