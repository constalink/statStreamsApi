/**
 * LowestRange
 * Returns the lowest number in a range
 *
 * If the range is an empty range, meaning the start and end values
 * are the same and the range doesn't include the end number, then NULL is
 * returned. Otherwise, the lowest integer value in the range is returned
 *
 * @param range A pointer to the range value to get the lowest number from
 * @return      A pointer to an integer value that contains the lowest number in the range
 *              or NULL if the range is an empty range
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/8/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef LowestRange_Header_DEF
#define LowestRange_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"
#include "typeRangeValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* LowestRange(typeRangeValue* range);

#endif
