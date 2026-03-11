/**
 * DataViewByte
 * Returns the byte in a data view at the specified zero based byte index.
 * If the index is at or beyond the end of the view, then 0 is returned.
 *
 * IMPORTANT: There is no distinction between a 0 that is returned when at the end
 * of the data view or an actual 0 in the data itself. Before calling this function
 * you should check if there are more bytes to read by checking dataView->length
 * against the index that you are passing into this function
 *
 * @param dataView The data view to read from
 * @param index    The zero based byte index of the byte to return
 * @return         The byte at the specified index
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/4/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DataViewByte_Header_DEF
#define DataViewByte_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeDataView.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
uint8_t DataViewByte(typeDataView* dataView, intmax_t index);

#endif
