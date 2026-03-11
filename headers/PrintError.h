/**
 * PrintError
 * Prints out a typeData object to STDERR
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
 * @param data The value to print to STDERR
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	6/24/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PrintError_Header_DEF
#define PrintError_Header_DEF

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

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
void PrintError(typeData* data);

#endif
