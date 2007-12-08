/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 *  Copyright (C) 2007 Jeffrey Stedfast
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1
 *  of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA
 *  02110-1301, USA.
 */


#ifndef __GMIME_PARSE_UTILS_H__
#define __GMIME_PARSE_UTILS_H__

G_BEGIN_DECLS

void g_mime_decode_lwsp (const char **in);
#define decode_lwsp(in) g_mime_decode_lwsp (in)

char *g_mime_decode_word (const char **in);
#define decode_word(in) g_mime_decode_word (in)

char *g_mime_decode_domain (const char **in);
#define decode_domain(in) g_mime_decode_domain (in)

G_END_DECLS

#endif /* __GMIME_PARSE_UTILS_H__ */