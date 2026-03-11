/**
 * TestMemLeak
 * Tests to make sure that memory hasn't leaked. What this function does is take
 * a pointer to a typeValue based object and calls MemCount on it which will return
 * the number of memory allocations. It then compares that number with the uncounted
 * property in the current memory stack. If the 2 values don't match, then you are
 * likely to run into memory leaks... in this case, the function prints an error
 * message out to the console and exits with a non zero status.
 *
 * You should never use this function in production. Only use this function in
 * your test files. It is also important to exercise proper usage of this function
 * in your test files. The way this function is meant to be used is as follows:
 *
 * 1. You call TrackMem() at the start of your main test function
 * 2. You call a function that returns a value
 * 3. You call TestMemLeak on that value to make sure that the function that was called
 *    freed all values that weren't returned from the function.
 *
 * Here's an example:
 *
 * int main {
 * 		// Start a new memory tracker
 * 		TrackMem();
 *
 * 		// Call a function
 * 		typeValue* myValue = CreateValue();
 *
 * 		// Call TestMemLeak on that value
 * 		// If the CreateValue function failed to free any memory
 * 		// then the test will fail and the program will exit
 * 		TestMemLeak(myValue);
 *
 * 		FreeMem();
 * }
 *
 * Prior to calling the TestMemLeak function, you'll need to make sure that all other
 * values that are tracked on the current memory stack have already been passed to
 * TestMemLeak or have had MemCount called on them. Here is an example that will fail
 *
 * int main {
 * 		TrackMem();
 * 		typeValue* myValue = CreateValue();
 * 		typeValue* secondValue = CreateValue();
 *
 * 		// This fails because secondValue hasn't been memory counted
 * 		TestMemLeak(myValue);
 * 		FreeMem();
 * }
 *
 * The proper way to test multiple values is to test them one at a time
 * directly after they are created like so
 *
 * int main {
 * 		Trackmem();
 *
 * 		typeValue* myValue = CreateValue();
 * 		TestMemLeak(myValue);
 *
 * 		typeValue* secondValue = CreateValue();
 * 		TestMemLeak(secondValue);
 * 		FreeMem();
 * }
 *
 * TestMemLeak is actually a macro that passes the current line number as well
 * as the value to the underlying _TestMemLeak function
 *
 * @param value The value to test
 * @return      This function always returns 0
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/27/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef TestMemLeak_Header_DEF
#define TestMemLeak_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------
// For int8_t int16_t int32_t int64_t uint8_t uint16_t uint32_t uint64_t
#include <stdint.h>

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Macros
//-------------------------------------------------------------------------------------

// --- Cl Disable Inspection ---
#define TestMemLeak(value) _TestMemLeak(__LINE__, value)

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
int16_t _TestMemLeak(int16_t line, void* value);

#endif
