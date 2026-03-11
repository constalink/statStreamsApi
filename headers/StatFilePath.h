/**
 * StatFilePath
 * Returns a typeDirEntry pointer for the file or folder at a given path.
 * This function reads information about a file or folder at a given path
 *
 * @param filePath Path to the file or folder to read stats for
 * @return         A pointer that contains information about the file / folder
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	12/13/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef StatFilePath_Header_DEF
#define StatFilePath_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeData.h"
#include "typeDirEntry.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeDirEntry* StatFilePath(typeData* filePath);

#endif
