/**
 * PrintStringTo
 * Prints out a typeData object to the specified handle
 * This function prints actual back slashes in the data as an actual back slash
 * on the screen instead of trying to interpret it like printf does
 *
 * For example: PrintString(String("\\u03C0"));
 * It'll print - \u03C0
 *
 * With printf("%s", "\\u03C0"), it'll print the pi symbol - π
 *
 * IMPORTANT! This function is not binary safe. If the data object has
 * arbitrary binary data, non printable characters will be discarded.
 * Also, it does support multi-byte UTF8 up to the 10FFFF code point
 *
 * @param data   The value to print
 * @param handle A file handle to print to. This can be STDERR or STDOUT
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/24/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PrintStringTo_Header_DEF
#define PrintStringTo_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For FILE
#include <stdio.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void PrintStringTo(typeData* data, FILE* handle);

#endif
