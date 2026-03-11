/**
 * typeKeyMap
 * Dictionary key map
 *
 * This struct is a lower level component of a typeDict struct.
 * It contains an index and a next index for use with quickly finding
 * hashed keys inside a dictionary
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeKeyMap_DEF
#define typeKeyMap_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeKeyMap {
	intmax_t index;
	intmax_t next;

} typeKeyMap;

#endif
