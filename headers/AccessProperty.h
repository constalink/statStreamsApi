/**
 * AccessProperty
 * Returns the value of a named property from a given value reference.
 * The following values / property names are accepted. Anything else will return NULL
 *
 * value type: enum / propertyName: A matching enum option name - Returns the matching enum option as a string
 * value type: struct / propertyName: A matching key in the struct - Returns the value at the specified key in the struct
 * value type: function / propertyName: "filePath" - Returns the file path to the function in a string
 * value type: function / propertyName: "listeners" - Returns an [int] list of all event listener ids
 * value type: function / propertyName: "enterListeners" - Returns an [int] list of all enter event listener ids
 * value type: function / propertyName: "exitListeners" - Returns an [int] list of all exit envent listener ids
 * value type: function / propertyName: "properties" - Returns a struct containing all properties that are defined on the function
 * value type: binary / propertyName: "byteLength" - Returns the byte length of the binary value as an int
 * value type: string / propertyName: "byteLength" - Returns the byte length of the string value as an int
 * value type: string / propertyName: "charLength" - Returns the character length of the string value as an int
 * value type: list / propertyName: "length" - Returns the number of elements in the list as an int
 * value type: fraction / propertyName: "integer" - Returns the whole number part of the fraction as an int
 * value type: fraction / propertyName: "numerator" - Returns the numerator part of the fraction as an int
 * value type: fraction / propertyName: "denominator" - Returns the denominator part of the fraction as an int
 * value type: range / propertyName: "start" - Returns the start of the range value as an int
 * value type: range / propertyName: "end" - Returns the end of the range value as an int
 * value type: range / propertyName: "includeEnd" - Returns a bool value that's true if the end value is included in the range or false otherwise
 * value type: regExp / propertyName: "byteLength" - Returns the length of the regular expression pattern in bytes as an int
 * value type: regExp / propertyName: "ignoreCase" - Returns a bool value that's true if the ignore case flag was set on the regular expression
 * value type: regExp / propertyName: "multiLine" - Returns a bool value that's true if the multi line flag was set on the regular expression
 * value type: regExp / propertyName: "dotAll" - Returns a bool value that's true if the dot all flag was set on the regular expression
 * value type: stream / propertyName: "opened" - Returns a bool value that's true if the string is currently in the opened state
 * value type: stream / propertyName: "error" - Returns a string value if there is an error message set on the stream or an empty ref otherwise
 * value type: stream / propertyName: "uri" - Returns a string value that contains the URI of the stream
 *
 * @param value         the value reference to query
 * @param propertyName  the name of the property whose value is requested
 * @return              the value associated with the specified property or NULL if not found
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/8/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AccessProperty_Header_DEF
#define AccessProperty_Header_DEF

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
typeValueRef* AccessProperty(typeValueRef* value, typeData* propertyName);

#endif
