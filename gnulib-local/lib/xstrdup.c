/* xstrdup.c -- copy a string with out of memory checking
   Copyright (C) 1990, 1996, 2000-2003, 2005-2006 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */

#include <config.h>

/* Specification.  */
#include "xalloc.h"

#include <string.h>

/* Return a newly allocated copy of STRING.  */

char *
xstrdup (const char *string)
{
  return strcpy ((char *) xmalloc (strlen (string) + 1), string);
}
