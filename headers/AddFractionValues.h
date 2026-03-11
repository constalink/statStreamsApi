/**
 * AddFractionValues
 * Adds two fraction values and returns the result as a new fraction value
 *
 * @param fraction1 A fraction value
 * @param fraction2 A 2nd fraction value
 * @return          A new fraction value that contains the sum of the 2 fraction values passed in
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	8/4/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddFractionValues_Header_DEF
#define AddFractionValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeFractionValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeFractionValue* AddFractionValues(typeFractionValue* fraction1, typeFractionValue* fraction2);

#endif
