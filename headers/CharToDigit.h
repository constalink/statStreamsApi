/**
 * CharToDigit
 * Converts a character to an integer value
 * This function performs the opposite operation of DigitToChar
 *
 * This function takes an unsigned 8 bit character and returns the numeric
 * value of that character. If the character isn't a numeric ASCII character (0-9, a-f, or A-F)
 * then zero is returned. This function is the equivalent of a string to number
 * conversion except for a single character. Examples:
 *
 * If you pass in 52, it'll return 4 because 52 is the decimal value for the "4" ASCII character
 * If you pass in 65, it'll return 10 because 65 is the decimal value for the "A" ASCII character
 * and "A" is hexidecimal for 10
 *
 * @param character The code for the character you want to convert (You can cast a char to a uint8_t and pass that in)
 * @return          The numeric value of the ASCII representation of the character.
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/6/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef CharToDigit_Header_DEF
#define CharToDigit_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t intmax_t uint8_t uint16_t uint32_t uint64_t uintmax_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
uint8_t CharToDigit(uint8_t character);

#endif
