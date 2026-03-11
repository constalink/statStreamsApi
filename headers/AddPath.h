/**
 * AddPath
 * Adds a file system like path to an existing file system like path while taking care to
 * make sure the result is a valid file system like path. This function does not check
 * to make sure that any of the file system paths exist.
 *
 * This function takes care of things making sure that the path is normalized. It gets
 * rid of double slashes and handles single and double dots in file paths
 *
 * @param path    The first part of the file path
 * @param addPath The part of the file path to add to the first part
 * @return        A normalized file path that represents adding the 2 file paths together
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef AddPath_Header_DEF
#define AddPath_Header_DEF

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
typeData* AddPath(typeData* path, typeData* addPath);

#endif
