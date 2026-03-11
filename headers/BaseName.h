/**
 * BaseName
 * Returns the basename of a path. Takes a path, strips directory and optionally, the file extension,
 * and returns the result. This function takes a string and removes away all characters up to the
 * first slash. If a slash doesn't exist, then no characters are removed from the beginning of the path.
 * If a value for removeFileExtension is provided, then a matching string is removed from the end
 * of the path value if it exists.
 *
 * @param path                The path to start with
 * @param removeFileExtension The file extension to remove if any. This can be NULL
 * @return                    The base name of the path
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef BaseName_Header_DEF
#define BaseName_Header_DEF

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
typeData* BaseName(typeData* path, typeData* removeFileExtension);

#endif
