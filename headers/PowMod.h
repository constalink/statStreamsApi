/**
 * PowMod
 * Calculates the equation (integer^power) % mod. This takes integer to the power of "power" and calculates
 * the remainder when dividing by mod
 *
 * The technique used doesn't require actually taking integer to the power of "power".
 * Imagine taking 2 to the power of 100 trillion, then calculating that modulo 573. Actually taking 2 to the power
 * of 100 trillion would be terabytes of data... and we can't do that without taking forever and likely crashing
 * the computer. This function can handle very large numbers and is ideal for encryption
 * calculations
 *
 * @param integer A pointer to the first integer
 * @param power   A pointer to the value to take the first integer to the power of
 * @param mod     A pointer to the modulus or number to divide integer^power by
 * @return        The remainder after taking integer to the power of "power" and dividing by mod
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/25/2023
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef PowMod_Header_DEF
#define PowMod_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeInteger.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeInteger* PowMod(typeInteger* integer, typeInteger* power, typeInteger* mod);

#endif
