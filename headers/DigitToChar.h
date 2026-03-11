/**
 * DigitToChar
 * Converts an integer digit to an ASCII character
 * This function performs the opposite operation of CharToDigit
 *
 * This function takes an unsigned 8 bit integer and returns the ASCII
 * value of that number. If the input number doesn't represent a single ASCII numeric character
 * then 0 is returned. This function is the equivalent of a number to string conversion
 * except for a single character. It interprets 10-15 as lower case hex characters a-f Examples:
 *
 * If you pass 4, it'll return 52 because 52 is the ASCII value for the "4" numeric character
 * If you pass in 10, it'll return 97 because 97 is the ASCII value for the "a" character (hex)
 * If you pass any number larger than 15, it'll return 0;
 *
 * @param digit The numeric digit to convert
 * @return      The ASCII representation of that digit or 0 if it can't be converted
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/6/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef DigitToChar_Header_DEF
#define DigitToChar_Header_DEF

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
uint8_t DigitToChar(uint8_t digit);

#endif
