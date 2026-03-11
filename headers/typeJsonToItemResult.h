/**
 * typeJsonToItemResult
 * A JSON to item result
 *
 * This value is expected to have either an item property with a non-zero strLength
 * and a zero errorPos or a NULL item with a zero strLength and a non-zero errorPos property
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/30/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeJsonToItemResult_DEF
#define typeJsonToItemResult_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeJsonValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeJsonToItemResult {
	VALUEMEMBERS;

	// If item is not null, then a value was determined
	typeJsonValue* item;

	// This is the number of characters in the JSON string that
	// made up the value. If this is less than 1, then it's an error
	// and item should be null
	intmax_t strLength;

	// If there was an issue, then this is the character
	// offset where the issue occurred
	intmax_t errorPos;

} typeJsonToItemResult;

#endif
