/**
 * JsonToString
 * Converts a JSON string object to a string
 *
 * This function takes a json encoded string and an offset to start
 * decoding the string value at and returns a result that either
 * contains the decoded value or an errorPos that tells where the error occurred
 * when attempting to decode the value. If successful, the return value will
 * contain a decoded value as well as a string length that tells how many
 * characters were decoded within the json string. Take a look at the
 * typeJsonToItemResult typedef for more details on the return value
 *
 * The json string is expected to have a double quote character '"' at the offset
 * that's passed in or the returned value will contain an error position
 *
 * @param json   A pointer to a json value to decode
 * @param offset A zero based offset to start decoding
 * @return       A pointer to a result value that either contains the value or an error position
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/30/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef JsonToString_Header_DEF
#define JsonToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeJsonToItemResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeJsonToItemResult* JsonToString(typeData* json, intmax_t offset);

#endif
