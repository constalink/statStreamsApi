/**
 * FractionValue
 * Creates a typeFractionValue value and returns a pointer to it
 *
 * This function allocates a new typeFractionValue value using the passed in number type
 * and fraction value and tracks it on the current memory stack
 *
 * @param type     The type of fraction to create
 * @param fraction The underlying fraction value
 * @return         A pointer to a a new typeFractionValue value that contains the fraction
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/30/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FractionValue_Header_DEF
#define FractionValue_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFraction.h"
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enNumberType.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* FractionValue(enNumberType type, typeFraction* fraction);

#endif
