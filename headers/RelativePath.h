/**
 * RelativePath
 * Creates a relative path from a full path and start path
 * Given a fromPath and a toPath, this function returns a relative path
 * which represents a path to the new path from the starting path.
 *
 * Example:
 * fromPath: /home/user/folder/
 * toPath: /home/user/folder2/file.txt
 * result: ../folder2/file.txt
 *
 * @param fromPath The starting file path. The path to create a relative path from
 * @param toPath   The ending path. The path to create a relative path to
 * @return         The relative path
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	2/25/2025
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RelativePath_Header_DEF
#define RelativePath_Header_DEF

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
typeData* RelativePath(typeData* fromPath, typeData* toPath);

#endif
