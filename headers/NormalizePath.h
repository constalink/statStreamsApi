/**
 * NormalizePath
 * Normalizes a file path by getting rid of dots, double slashes, and other irregularities
 * in a file path.
 *
 * @param path The file system like path to normalize
 * @return     A normalized file path
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef NormalizePath_Header_DEF
#define NormalizePath_Header_DEF

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
typeData* NormalizePath(typeData* path);

#endif
