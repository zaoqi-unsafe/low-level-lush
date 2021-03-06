/*
   Copyright (C) 2010 Clozure Associates
   Copyright (C) 1994-2001 Digitool, Inc
   This file is part of Clozure CL.  

   Clozure CL is licensed under the terms of the Lisp Lesser GNU Public
   License , known as the LLGPL and distributed with Clozure CL as the
   file "LICENSE".  The LLGPL consists of a preamble and the LGPL,
   which is distributed with Clozure CL as the file "LGPL".  Where these
   conflict, the preamble takes precedence.  

   Clozure CL is referenced in the preamble as the "LIBRARY."

   The LLGPL is also available online at
   http://opensource.franz.com/preamble.html
*/

/* Define signed/unsigned 8/16/32/64-bit type names. I don't know what
   standards are involved, but Linux, Darwin, and FreeBSD all seem to
   conform to the names used here.
*/

#include <sys/types.h>
#include <stdint.h>

typedef int64_t s64_t;
typedef u_int64_t u64_t;
typedef int32_t s32_t;
typedef u_int32_t u32_t;
typedef int16_t s16_t;
typedef u_int16_t u16_t;
typedef int8_t s8_t;
typedef u_int8_t u8_t;
