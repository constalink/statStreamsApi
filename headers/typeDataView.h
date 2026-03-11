/**
 * typeDataView
 * A data view which is made up of 0 or more typeData values.
 * With a typeDataView value, the entire list of multiple
 * typeData values can be treated like a single combined typeData
 * value without having to actually allocate the combined memory
 * to hold all the data in the values.
 *
 * To read a byte at a given index in the view, have a look at
 * the DataViewByte function
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef typeDataView_DEF
#define typeDataView_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeValue.h"
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Struct definition
//-------------------------------------------------------------------------------------
typedef struct typeDataView {
	VALUEMEMBERS;
	typeDataList* chunks;
	intmax_t length;

} typeDataView;

#endif
