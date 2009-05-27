/*
 * This file is part of LibCSS.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2008 John-Mark Bell <jmb@netsurf-browser.org>
 */

#ifndef css_parse_properties_utils_h_
#define css_parse_properties_utils_h_

#include "parse/language.h"

css_error parse_important(css_language *c,
		const parserutils_vector *vector, int *ctx,
		uint8_t *result);
css_error parse_colour_specifier(css_language *c,
		const parserutils_vector *vector, int *ctx,
		uint32_t *result);
css_error parse_named_colour(css_language *c, lwc_string *data, 
		uint32_t *result);
css_error parse_hash_colour(lwc_string *data, uint32_t *result);
css_error parse_unit_specifier(css_language *c,
		const parserutils_vector *vector, int *ctx,
		uint32_t default_unit,
		css_fixed *length, uint32_t *unit);
css_error parse_unit_keyword(const char *ptr, size_t len, 
		css_unit *unit);

#endif