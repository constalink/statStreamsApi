/**
 * DataIntToString
 * Converts a typeData value that represents an integer value into
 * a string representation of that integer. For example:
 *
 * If intValue is "\x42\xE6\x22\x04" and intBase is enIntBaseDecimal, then the return value
 * will be "1122378244"
 *
 * The return value will have a prefix if intBase isn't enIntBaseDecimal as follows:
 * - If enIntBase is enIntBaseBinary, the prefix will be "0b"
 * - If enIntBase is enIntBaseOctal, the prefix will be "0o"
 * - If enIntBase is enIntBaseHex, the prefix will be "0x"
 *
 * An example in octal. If intValue is "\x42\xE6\x22\x04" and intBase is enIntBaseOctal, then the return value
 * will be "0o10271421004"
 *
 * @param intValue A pointer to a typeData value that we want to convert
 * @param intBase  The integer base to convert to
 * @return         A pointer to a typeData value that contains the result
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	10/16/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DataIntToString_Header_DEF
#define DataIntToString_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enIntBase.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* DataIntToString(typeData* intValue, enIntBase intBase);

#endif
