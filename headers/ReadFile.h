/**
 * ReadFile
 * Reads a file into a typeData object
 * NOTE: The file is read and returned in its entirety so be careful when calling this function
 * against large files.
 *
 * This function returns a result pointer which will either contain the content of the file
 * or an error message that tells why the file could not be read.
 *
 * @param filePath The path to the file to be read
 * @return         A result pointer that contains either the file contents or an error message
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef ReadFile_Header_DEF
#define ReadFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeReadFileResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeReadFileResult* ReadFile(typeData* filePath);

#endif
