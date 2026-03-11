/**
 * MultiplyIntegerValues
 * Multiplies integer values
 *
 * This function handles infinity values as well as negative values
 * Here is a table of how infinity / negative / zero values are handled
 *
 * +integer is any integer that's larger than zero but less than infinity
 * -integer is any integer that's less than zero but more than negative infinity
 *
 * --------------------------------------------------------------------
 * |          | +infinity | -infinity | +integer  | -integer  | zero  |
 * |----------|-----------|-----------|-----------|-----------|-------|
 * |+infinity | +infinity | -infinity | +infinity | -infinity | zero  |
 * |----------|-----------|-----------|-----------|-----------|-------|
 * |-infinity | -infinity | +infinity | -infinity | +infinity | zero  |
 * |----------|-----------|-----------|-----------|-----------|-------|
 * |+integer  | +infinity | -infinity | +integer  | -integer  | zero  |
 * |----------|-----------|-----------|-----------|-----------|-------|
 * |-integer  | -infinity | +infinity | -integer  | +integer  | zero  |
 * |----------|-----------|-----------|-----------|-----------|-------|
 * |zero      | zero      | zero      | zero      | zero      | zero  |
 * --------------------------------------------------------------------
 *
 * @param int1 A pointer to the first integer to multiply
 * @param int2 A pointer to the second integer to multiply
 * @return     A pointer to the result which is the product of int1 and int2
 *
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/24/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef MultiplyIntegerValues_Header_DEF
#define MultiplyIntegerValues_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeIntegerValue.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeIntegerValue* MultiplyIntegerValues(
	typeIntegerValue* int1,
	typeIntegerValue* int2
);

#endif
