/**
 * WriteToFile
 * Writes data to a file. This function takes a file handle and the data
 * to write and writes that content to the file at the current seek position.
 * It then returns the number of bytes written.
 *
 * NOTE: This function does not open or close the file handle
 *
 * @param fileHandle An open writable file handle to write to
 * @param data       A pointer to the data to write to the file handle
 * @return           The number of bytes written
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef WriteToFile_Header_DEF
#define WriteToFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>
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
intmax_t WriteToFile(FILE* fileHandle, typeData* data);

#endif
