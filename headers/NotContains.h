/**
 * NotContains
 * Tells if a value does not contain another value.
 *
 * This function expects a needle argument and a hayStack argument that
 * are comparable that's to say that it's possible for needle to be inside haystack
 *
 * Here is a table of supported value type combinations. If supported values aren't
 * passed in, then true is returned
 *
 * --------------------------------------------------------------------------------------------------
 * | hayStack type | needle type | notes                                                            |
 * | --------------|-------------|------------------------------------------------------------------|
 * | binary        | binary      | Tells if a binary is NOT contained within another one            |
 * | binary        | string      | Tells if a string is NOT contained within a binary               |
 * | string        | string      | Tells if a string is NOT a substring of another string           |
 * | range         | int         | Tells if an integer does NOT fall within the range               |
 * | range         | range       | Tells if a range is NOT a sub range of another one               |
 * | enum          | string      | Tells if the string does NOT match one of the enum options       |
 * | list          | any?        | Tells if an element in the list is NOT equal to the needle value |
 * | dict          | string      | Tells if a key does NOT exist in the dictionary                  |
 * --------------------------------------------------------------------------------------------------
 *
 * The return value will be one of the following:
 * false - If it's determined that needle is contained within hayStack
 * true  - If it's determined that needle is NOT contained within hayStack
 *
 * @param needle   A pointer to a value to search for
 * @param hayStack A pointer to a value to search within
 * @return         true or false depending on the result of the search
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NotContains_Header_DEF
#define NotContains_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeValueRef.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool NotContains(typeValueRef* needle, typeValueRef* hayStack);

#endif
