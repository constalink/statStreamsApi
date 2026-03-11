/**
 * DirName
 * Returns the directory name of a path. This function takes a path,
 * strips out all the characters after the last slash and returns the result.
 * If the path has no slash, then "." is returned. If the path is "/"
 * then "/" is returned.
 *
 * @param path The file system like path string
 * @return     All characters up to but not including the last slash
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DirName_Header_DEF
#define DirName_Header_DEF

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
typeData* DirName(typeData* path);

#endif
