/**
 * typeBuffer
 * A buffer value
 *
 * A typeBuffer value is used to hold a data as well as byte positions that
 * track where the start and end position of readable data is. It's useful for
 * keeping track of incoming data streams where the number of bytes that's
 * coming in may not line up perfectly with the number of bytes we want to read
 * when processing that data. Buffer values help by allowing us to buffer large
 * chunks of data while keeping track of smaller data reads.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/3/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeBuffer_DEF
#define typeBuffer_DEF

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

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeBuffer {
	VALUEMEMBERS;

	typeData* buffer;
	uintmax_t startPos;
	uintmax_t endPos;

} typeBuffer;

#endif
