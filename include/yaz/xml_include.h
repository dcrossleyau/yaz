/* This file is part of the YAZ toolkit.
 * Copyright (C) 1995-2010 Index Data.
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Index Data nor the names of its contributors
 *       may be used to endorse or promote products derived from this
 *       software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE REGENTS AND CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/** \file 
    \brief XML Include (not to be confused with W3C XInclude)
*/

#ifndef YAZ_XML_INCLUDE_H
#define YAZ_XML_INCLUDE_H

#include <yaz/yconfig.h>
#include <yaz/xmltypes.h>

YAZ_BEGIN_CDECL

#if YAZ_HAVE_XML2

/** \brief substitute include nodes in a tree
    \param n node where include is peformed
    \param base_path base_path - for relative file specs
    \retval 0 OK
    \retval -1 FAILURE

    Nodes of the form <include src="glob-pattern"/> are substituted with
    contents of files matching glob-pattern. Do not use this function
    on XML from untrusted sources -- from the net from example -- local
    trusted XML configuration ONLY.
*/
YAZ_EXPORT
int yaz_xml_include_simple(xmlNode *n, const char *base_path);

#endif
YAZ_END_CDECL

#endif

/*
 * Local variables:
 * c-basic-offset: 4
 * c-file-style: "Stroustrup"
 * indent-tabs-mode: nil
 * End:
 * vim: shiftwidth=4 tabstop=8 expandtab
 */
