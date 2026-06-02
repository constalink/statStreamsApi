/**
 * HtmlEncode
 * Takes plain text and returns a value that is encoded such that it can
 * be embedded into an HTML tag attribute or within an HTML tag as a literal
 * text value. HTML characters such as &, <, >, and quotes are replaced by their
 * HTML entity equivalent character sequences. Also, any non printable characters
 * are removed from the result.
 *
 * @param text             The text to encode
 * @param renderWhiteSpace Whether or not to render white space. If true then newline
 *                         characters will be replaced with <br> and multiple spaces
 *                         and tabs will be replaced with non breaking spaces
 * @return                 The encoded text. Suitable for embedding into an HTML attribute or tag
 *
 * @license  	MIT
 * @author   	Ray Perea <ray@consta.link>
 * @created  	5/26/2026
 * @copyright	Constalink, all rights reserved
 * @visibility	Public
 */

#ifndef HtmlEncode_Header_DEF
#define HtmlEncode_Header_DEF

//-------------------------------------------------------------------------------------
// Included libraries
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Included types
//-------------------------------------------------------------------------------------
#include "typeBool.h"
#include "typeData.h"

//-------------------------------------------------------------------------------------
// Included enums
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
// Header definition
//-------------------------------------------------------------------------------------
typeData* HtmlEncode(typeData* text, typeBool renderWhiteSpace);

#endif
