/**
 * typeThreadList
 * List of typeThread structs
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/2/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeThreadList_DEF
#define typeThreadList_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeThread.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeThreadList {
	VALUEMEMBERS;

	// This member is only used as a place holder so that it's
	// compatible with the List function in the collections package
	void* sortCall;

	// The number of threads in the list
	intmax_t length;

	// The type of items in the list
	typeThread** list;

} typeThreadList;

#endif
