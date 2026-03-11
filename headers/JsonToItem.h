/**
 * JsonToItem
 * Converts a JSON string into a value
 *
 * This function takes a json encoded string and an offset to start
 * decoding the value at and returns a result that either
 * contains the decoded value or an errorPos that tells where the error occurred
 * when attempting to decode the value. If successful, the return value will
 * contain a decoded value as well as a string length that tells how many
 * characters were decoded within the json string. Take a look at the
 * typeJsonToItemResult typedef for more details on the return value
 *
 * This function takes a look at the json string and the offset that's passed in
 * and determines what type of value should be returned
 *
 * @param json   A pointer to a json value to decode
 * @param offset A zero based offset to start decoding
 * @return       A pointer to a result value that either contains the value or an error position
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/1/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef JsonToItem_Header_DEF
#define JsonToItem_Header_DEF

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
typeJsonToItemResult* JsonToItem(typeData* json, intmax_t offset);

#endif
