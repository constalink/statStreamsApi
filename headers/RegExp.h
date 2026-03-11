/**
 * RegExp
 * Creates a typeRegExp value and returns a pointer to it
 *
 * This function allocates a new typeRegExp value from the arguments that are
 * passed in and tracks it on the current memory stack.
 *
 * The pattern is expected to be a string that can have any of these elements:
 * - Alpha numeric characters - Matches a literal character
 * - Escape sequences - \0\\\t\f\n\v\r\e\/\(\)\{\}\[\]\.\|\*\+\?\^\$ - Matches a literal special character
 * - Unicode escapes - \u{xxxx} - where xxxx is a unicode code point - Matches the unicode code point
 * - Hex escape - \x## - where ## is a numeric byte value - Matches a byte value
 * - Digits - \d - matches any digit
 * - Non digits - \D - matches any non digit
 * - Spaces - \s - matches any space character
 * - Non spaces - \S - matches any non space character
 * - Words - \w - matches any word character same as [a-zA-Z0-9_]
 * - Non words - \W matches any non word character same as [^a-zA-Z0-9_]
 * - Word boundary - \b - matches a word boundary (doesn't consume characters in the match)
 * - Non word boundary - \B - matches a non-word boundary (doesn't consume characters in the match)
 * - Start anchor - ^ - matches the start of the string or start of a line with multiLine set (doesn't consume characters in the match)
 * - End anchor - $ - matches the end of the string or end of a line with multiLine set (doesn't consume characters in the match)
 * - Back reference - \1 - \9 - matches a previous capture group
 * - Wildcard - . - matches any character except new line. If dotAll is set, then it matches any character
 * - Character sets - [xyz] - where xyz is a set of characters to match
 * - Character ranges - [a-z] - where a-z can be any ASCII character range
 * - Negated character sets [^xyz] - where xyz is a set of characters to not match... any other character matches
 * - Capture groups - (xyz) - where xyz is any reg exp pattern to match. This captures the match and can be used for back references
 * - Non capture groups - (?:xyz) - where xyz is any reg exp pattern to match
 * - Look aheads - (?=xyz) - where xyz is any reg exp pattern to look for (doesnt consume characters in the match)
 * - Negative look aheads - (?!xyz) - where xyz is any reg exp pattern to look for and match if not found (doesn't consume characters in the match)
 * - Alternatives - abc|xyz - where abc and xyz are reg exp patterns to match either one
 * - Quantifiers
 *   - * - 0 or more of the previous character or group
 *   - + - 1 or more of the previous character or group
 *   - ? - 0 or 1 of the previous character or group
 *   - {x,} - Where x can be any non negative number - matches x or more of the previous character or group
 *   - {,x} - Where x can be any non negative number - matches up to x of the previous character or group
 *   - {x,y} - Where x and y are non negative numbers and y is larger than or equal to x - matches between x and y of the previous character or group
 *
 * We won't go into detail here about all the possible pattern combinations, but for the most part,
 * the pattern syntax is much like javascript regular expressions. Here is an example of matching
 * 2 or more words separated by a space:
 *
 * typeRegExp* wordsRegExp = RegExp(String("\w+\s\w+"), false, false, false);
 *
 * If the pattern is invalid or can't be parsed correctly, then the return value will
 * have an empty list for the instructions property. No other error is given so you may want to
 * consider checking the return value to make sure that the instructions property isn't empty
 *
 * @param pattern A pointer to a typeData value that contains the regular expression pattern
 * @param ignoreCase true to ignore case when matching letters or false to perform case sensitive matches
 * @param multiLine  true to allow anchors to match at line boundaries as well as the start/end of the string
 * @param dotAll     true to allow the dot character to match all characters including new lines
 * @return           A pointer to a new regular expression value
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	7/1/2022
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef RegExp_Header_DEF
#define RegExp_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"
#include "typeRegExp.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeRegExp* RegExp(
	typeData* pattern,
	typeBool ignoreCase,
	typeBool multiLine,
	typeBool dotAll
);

#endif
