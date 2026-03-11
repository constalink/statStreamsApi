/**
 * IsLittleEndian
 * Tells whether or not the architecture is little endian
 * With little endian, 1 is stored in 64 bits as 0x0100000000000000
 *
 * @return true if the system is little endian or false otherwise
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef IsLittleEndian_Header_DEF
#define IsLittleEndian_Header_DEF

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

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeBool IsLittleEndian();

#endif
