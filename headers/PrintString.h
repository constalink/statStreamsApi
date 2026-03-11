/**
 * PrintString
 * Prints out a typeData object to STDOUT
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
 * @param data The value to print to STDOUT
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	3/22/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PrintString_Header_DEF
#define PrintString_Header_DEF

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
void PrintString(typeData* data);

#endif
