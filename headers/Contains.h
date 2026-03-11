/**
 * Contains
 * Tells if a value contains another value or not.
 *
 * This function expects a needle argument and a hayStack argument that
 * are comparable that's to say that it's possible for needle to be inside haystack
 *
 * Here is a table of supported value type combinations.
 *
 * ----------------------------------------------------------------------------------------------
 * | hayStack type | needle type | notes                                                        |
 * | --------------|-------------|---------------------------------------------------------------
 * | binary        | binary      | Tells if a binary is contained within another one            |
 * | binary        | string      | Tells if a string is contained within a binary               |
 * | string        | string      | Tells if a string is a substring of another string           |
 * | range         | int         | Tells if an integer falls within the range                   |
 * | range         | range       | Tells if a range is a sub range of another one               |
 * | enum          | string      | Tells if the string matches one of the enum options          |
 * | list          | any?        | Tells if an element in the list is equal to the needle value |
 * | dict          | string      | Tells if a key exists in the dictionary                      |
 * ----------------------------------------------------------------------------------------------
 *
 * The return value will be one of the following:
 * 0  - If it's determined that needle is not contained within hayStack
 * 1  - If it's determined that needle is contained within hayStack
 * -1 - If a determination could not be made or if unsupported value types were passed in
 *
 * @param needle   A pointer to a value to search for
 * @param hayStack A pointer to a value to search within
 * @return         0, 1, or -1 depending on the result of the search
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/9/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef Contains_Header_DEF
#define Contains_Header_DEF

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
int8_t Contains(typeValueRef* needle, typeValueRef* hayStack);

#endif
