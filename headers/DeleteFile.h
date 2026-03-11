/**
 * DeleteFile
 * Takes a file path and deletes the file on disk that matches that file path.
 * The return value contains information about the result of the operation. It
 * can tell you if the operation succeeded and if not, why.
 * If the operation fails, then the return value will have an error message
 * set which tells why the operation failed.
 *
 * @param path The file path to delete
 * @return     A result value that tells if the operation succeeded
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DeleteFile_Header_DEF
#define DeleteFile_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDeleteFileResult.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDeleteFileResult* DeleteFile(typeData* path);

#endif
