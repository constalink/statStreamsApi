/**
 * NotContains
 * Tells if a value does not contain another value.
 *
 * This function expects a needle argument and a hayStack argument that
 * are comparable that's to say that it's possible for needle to be inside haystack
 *
 * Here is a table of supported value type combinations.
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
 * 0  - If it's determined that needle is contained within hayStack
 * 1  - If it's determined that needle is NOT contained within hayStack
 * -1 - If a determination could not be made or if unsupported value types were passed in
 *
 * @param needle   A pointer to a value to search for
 * @param hayStack A pointer to a value to search within
 * @return         0, 1, or -1 depending on the result of the search
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
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

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
int8_t NotContains(typeValueRef* needle, typeValueRef* hayStack);

#endif
