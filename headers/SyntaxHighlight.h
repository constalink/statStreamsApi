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
 * This function expects you to provide a list of css classes where each class in
 * the list is either NULL in which case no syntax highlighting is performed for
 * that token, or it's a string in which case, the entire token is wrapped in a
 * span tag that includes the corresponding token class. Each AST token type is simply
 * an integer and the number of tokens is extensive (several hundred of them)
 * so you can simply pass in a large list of strings for syntax highlighting. Also,
 * the integer for an AST token type is subject to change, so you'll need to perform
 * tests to make sure that syntax highlighting still works as expected whenever
 * Stat is updated.
 *
 * Example:
 * Let's say we want to target comments and the "await" key word. These tokens are
 * currently set to 1 (for comment) and 7 (for await). This list will target these tokens
 *
 * // Create a data list that has enough slots
 * typeDataList* astSyntaxClasses = DataList(8, 0);
 * // Set the class for the "1" index position in the list
 * SetIndexInPlace(astSyntaxClasses, String("comment"), 1);
 * // Set the class for the "7" index position in the list
 * SetIndexInPlace(astSyntaxClasses, String("await-key-word"), 7);
 *
 * // We end up with this list
 * // [NULL, "comment", NULL, NULL, NULL, NULL, NULL, "await-key-word"]
 *
 * @param codeSnippet      The code to highlight
 * @param astSyntaxClasses A pointer to a typeData* list that contains a css
 *                         class for each AST token type you want to target
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
#include "typeDataList.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* SyntaxHighlight(typeData* codeSnippet, typeDataList* astSyntaxClasses);

#endif
