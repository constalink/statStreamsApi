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
 * Here are the list of css classes that can be targeted by a css theme:
 *
 * General Elements
 * - Section Names: .section-name
 *    - Each section name has a class that is a dash prepended to the lower case version of the section name
 *    - For example: To target the "MAIN" section name: .section-name.-main
 * - Comments: .comment
 * - Key Words: .key-word
 *    - Each key word has a class that is a dash prepended to the key word
 *    - For example: To target the "let" key word: .key-word.-let
 * - Value Escapes: .escape
 *    - Hex Escape: .escape.-hex
 *    - Unicode Escape: .escape.-unicode
 *    - Binary Escape: .escape.-binary
 *    - String Escape: .escape.-string
 *    - Value Escape: .escape.-value
 * - Value Operators: .operator
 *    - Each operator has an additional class that is the name of the operator prepended by a dash
 *    - For example: To target the "equals" operator: .operator.-equals
 * - Literals: .literal
 *    - Booleans: .literal.-bool
 *    - Empty: .literal.-empty
 *    - Float: .literal.-float
 *    - Fraction: .literal.-fraction
 *    - Infinity: .literal.-infinity
 *    - Integer: .literal.-int
 *    - Range: .literal.-range
 *    - Numbers: .literal.-number
 *    - Binary: .literal.-binary
 *    - List: .literal.-list
 *    - Regular Expression: .literal.-reg-exp
 *    - String: .literal.-string
 *    - Struct: .literal.-struct
 *       - Struct Element: .struct-element
 * - Names: .name
 *    - Argument: .name.-argument
 *    - Stream: .name.-stream
 *    - Generic: .name.-generic
 *    - Property: .name.-property
 *    - Variable: .name.-variable
 * - Type Hints: .type-hint
 *    - Alias: .type-hint.-alias
 *    - Any: .type-hint.-any
 *    - Binary: .type-hint.-binary
 *    - Bool: .type-hint.-bool
 *    - Dictionary: .type-hint.-dictionary
 *    - Empty: .type-hint.-empty
 *    - Fraction: .type-hint.-fraction
 *    - Generic: .type-hint.-generic
 *    - Int: .type-hint.-int
 *    - List: .type-hint.-list
 *    - Range: .type-hint.-range
 *    - RegExp: .type-hint.-reg-exp
 *    - Stream: .type-hint.-stream
 *    - String: .type-hint.-string
 *    - Struct: .type-hint.-struct
 *    - Return: .type-hint.-return
 *    - Arg: .type-hint.-arg
 *
 * Regular Expression Elements
 * - Character Set Range: .char-set-range
 * - Special Characters: .reg-exp-special
 *    - Dot: .reg-exp-special.-dot
 *    - Character Set: .reg-exp-special.-char-set
 *    - Group: .reg-exp-special.-group
 * - Modifiers: .reg-exp-modifier
 * - Quantifiers: .reg-exp-quant
 * - Escapes: .escape
 *    - Regular Expression Escapes: .escape.-reg-exp
 *    - Back References: .escape.-back-ref
 *    - Character Set Escape: .escape.-char-set
 *    - Digits: .escape.-digits
 *    - Non Digits: .escape.-non-digits
 *    - Spaces: .escape.-spaces
 *    - Non Spaces: .escape.-non-spaces
 *    - Word Boundary: .escape.-word-boundary
 *    - Non Word Boundary: .escape.-non-word-boundary
 *    - Words: .escape.-words
 *    - Non Words: .escape.-non-words
 *
 * Other Elements
 * - Accessors: .accessor
 * - Accessor Expressions: .accessor-expression
 * - Argument Lists: .argument-list
 * - Chained Function Calls: .chained-function-call
 * - Close Expressions: .close-expression
 * - Function Calls: .function-call
 * - Off Expressions: .off-expression
 * - Open Expressions: .open-expression
 * - Property Calls: .property-call
 * - Tag Function Calls: .tag-function-call
 * - Import paths: .import-path
 *
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
