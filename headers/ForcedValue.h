/**
 * ForcedValue
 * Returns a non empty version of the value that's passed in
 *
 * If the value is already not empty, then it's returned.
 * If it's empty, then the default value for the passed in dataType is returned
 *
 * Here are the default values for each data type:
 * string:     "" (An empty string)
 * binary:     `` (An empty binary)
 * int:        0
 * fraction:   0.0
 * bool:       false
 * regExp:     // (An empty regular expression that matches nothing)
 * range:      0..0 (This is an empty range)
 * enum:       An enum value has all the choices of the data type that's passed in
 * enumOption: A string value that matches the first option in the enum or an empty string if the enum contains no options
 * list:       An empty list
 * dict:       An empty dictionary
 * struct:     A struct that has all non-optional keys and associated default values
 * empty:      Empty
 * unknown:    Empty
 * undefined:  Empty
 * any         0 (an integer)
 * union       The default value for the first non empty type in the union
 * generic     The default value for the restricted to type for the generic or zero if it's not restricted
 * function    A function value with the required signature but no body except a return statement that returns a value that satisfies the return type
 * stream      An opened stream that accepts the required input type and returns default values for the required output type but doesn't do anything with those values
 *
 * IMPORTANT: The dataType value passed in is only checked if the value that's passed in is
 * empty. This means that if the value passed in doesn't match the dataType that's passed in,
 * that doesn't mean that the function will force that data type. In practice, you should only
 * pass in values and data types that match so this is a non-issue. But if you pass in a string
 * for the value, and an int for the dataType, the original string will be returned, not an int
 *
 * @param value    A pointer to the typeValueRef that contains the value to force to not be empty
 * @param dataType A pointer to the typeType data type that we want to force if the value is empty
 * @return         The value if it's not empty or a non-empty value that matches the dataType
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ForcedValue_Header_DEF
#define ForcedValue_Header_DEF

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
typeValueRef* ForcedValue(typeValueRef* value, typeType* dataType);

#endif
