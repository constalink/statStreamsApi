/**
 * FileModeCanRead
 * Tells whether a file mode can read from the file
 *
 * @param mode The file mode to check
 * @return     True if the file mode can read or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	1/17/2024
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef FileModeCanRead_Header_DEF
#define FileModeCanRead_Header_DEF

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
typeBool FileModeCanRead(enOpenFileMode mode);

#endif
