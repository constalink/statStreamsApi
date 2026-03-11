/**
 * IntegerToString
 * Converts an integer to a string. This function takes an integer
 * and converts it to a typeData value that contains the string representation
 * of that integer. For example: If the integer value is 1122378244, then the
 * typeData value that's returned will contain the string "1122378244"
 *
 * The return value will have a prefix if intBase isn't enIntBaseDecimal as follows:
 * - If enIntBase is enIntBaseBinary, the prefix will be "0b"
 * - If enIntBase is enIntBaseOctal, the prefix will be "0o"
 * - If enIntBase is enIntBaseHex, the prefix will be "0x"
 *
 * An example in octal. If intValue is 1122378244 and intBase is enIntBaseOctal, then the return value
 * will be "0o10271421004"
 *
 * @param intValue A pointer to a typeInteger value that we want to convert
 * @param intBase  The integer base to convert to
 * @return         A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/6/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IntegerToString_Header_DEF
#define IntegerToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* IntegerToString(typeInteger* intValue, enIntBase intBase);

#endif
