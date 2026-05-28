/**
 * SyntaxHighlight
 * Takes a code snippet and returns a syntax highlighted version of that snippet
 * that's suitable to be placed into an HTML <pre> tag. If the code can't be parsed
 * then the token where the code parsing failed will be wrapped in a span tag like so:
 * <span class="parse-error" data-error="Why parsing failed" data-error-code="errorCode"></span>
 *
 * The result will contain each token wrapped in a span tag like so:
 * <span class="token-class">token</span>
 * where token-class is the class for the token type.
 *
 * No actual coloring is embedded in the returned string, rather, it's up to a css
 * stylesheet to determine how each token type is colored. This allows different
 * themes to style the same syntax code differently.
 *
 * @param codeSnippet    The code to highlight
 * @param prefixClasses  A string to use to prefix each token-class
 * @return               The highlighted snippet that's suitable to be placed into a <pre> tag
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef SyntaxHighlight_Header_DEF
#define SyntaxHighlight_Header_DEF

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
typeData* SyntaxHighlight(typeData* codeSnippet, typeData* prefixClasses);

#endif
