/**
 * FileModeCanWrite
 * Tells whether or not a file mode can write
 *
 * @param mode The file mode to check
 * @return     True if the file mode can write or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FileModeCanWrite_Header_DEF
#define FileModeCanWrite_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------
#include "enOpenFileMode.h"

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool FileModeCanWrite(enOpenFileMode mode);

#endif
