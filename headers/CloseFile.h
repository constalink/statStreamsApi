/**
 * CloseFile
 * Closes a file handle that's contained within the open result that's passed in.
 * Once the file handle is closed, the openResult->fileHandle is set to NULL
 *
 * @param openResult An open file result pointer
 * @return           Returns true if the file handle was closed or false if not
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CloseFile_Header_DEF
#define CloseFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeOpenFileResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool CloseFile(typeOpenFileResult* openResult);

#endif
