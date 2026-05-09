/**
 * IsUtf8String
 * Tells if a typeData value is a valid printable UTF8 string
 * If a data value contains non printable characters or binary data that isn't
 * valid UTF8, then false will be returned, otherwise true will be returned
 *
 * @param data A pointer to a typeData value to check
 * @return     true if the value contains only printable UTF8 characters or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/4/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsUtf8String_Header_DEF
#define IsUtf8String_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsUtf8String(typeData* data);

#endif
