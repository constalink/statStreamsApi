/**
 * typeDict
 * Dictionary type
 *
 * This is the base dictionary type and can contain any type of typeValue* pointer
 * You can (and should) create specialized dictionaries that contain specific types of typeValue* pointers.
 *
 * To create a specialized dictionary, define the dictionary using a typedef like below except set the type
 * for the dictionary members
 *
 * So, instead of this:
 * typedef struct typeSpecialDict {
 * 		DICTMEMBERS;
 * 		void** values;
 * }
 *
 * Use this instead:
 * typedef struct typeSpecialDict {
 * 		DICTMEMBERS;
 * 		typeSpecial** values;
 * }
 *
 * IMPORTANT: You cannot add any additional members or you'll get memory errors
 *
 * Also, it is not recommended to create a constructor function like "SpecialDict(intmax_t args, ...)"
 * Creating a special constructor function isn't recommended because you can simply call the
 * Dict(intmax_t args, ...) function. The Dict function can take any type of arguments, properly adds
 * the DICT flag, sets everything up properly, and returns a void* so you can simply cast to the proper
 * dictionary type. For example:
 * typeSpecialDict* specialDict = Dict(2, special1, special2);
 *
 * If you do create a special constructor function, you'll need to make sure you setup everything properly which
 * is beyond the scope of this document... and proper setup procedure / algorithm may change in the future.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/28/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDict_Header_DEF
#define typeDict_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeData.h"
#include "typeKeyMap.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

// The dictionary members macro
#define DICTMEMBERS VALUEMEMBERS; \
					typeKeyMap* keyMap; \
					intmax_t length; \
					intmax_t spots; \
					typeData** keys

#define DICT 0x04

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDict {
	DICTMEMBERS;
	typeValue** values;
} typeDict;

#endif
