/**
 * OpenFile
 * Opens a file and returns a result value that tells whether or not
 * the operation succeeded and if not, why
 *
 * @param path The path to the file to open
 * @param mode The file mode to use when opening the file
 * @return     A result pointer that contains the file handle or an error message
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef OpenFile_Header_DEF
#define OpenFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeOpenFileResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enOpenFileMode.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeOpenFileResult* OpenFile(typeData* path, enOpenFileMode mode);

#endif
