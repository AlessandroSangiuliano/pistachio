######################################################################
##                
## Copyright (C) 2003, 2007, 2010,  Karlsruhe University
##                
## File path:     Makefile.in
##                
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions
## are met:
## 1. Redistributions of source code must retain the above copyright
##    notice, this list of conditions and the following disclaimer.
## 2. Redistributions in binary form must reproduce the above copyright
##    notice, this list of conditions and the following disclaimer in the
##    documentation and/or other materials provided with the distribution.
## 
## THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
## ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
## IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
## ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
## FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
## DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
## OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
## HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
## LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
## OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
## SUCH DAMAGE.
##                
## $Id: Makefile.in,v 1.11 2006/02/23 21:07:58 ud3 Exp $
##                
######################################################################

srcdir=		.
top_srcdir=	../..
top_builddir=	../..

include $(top_srcdir)/Mk/l4.base.mk

powerpc_SRCS=	1275tree.cc fdt.cc 

#ia32_OBJS=      __xgetRD.s

LIBRARY=	io
SRCS=		get_hex.cc  print.cc \
$(ARCH).cc $($(ARCH)_SRCS)  getpagesize.c pcspkr.c  \
 $(wildcard bsd/stdio/*.c) $(wildcard bsd/stdlib/*.c)\
  $(wildcard android/*.c)  $(wildcard bsd/net/*.c) \
$(wildcard bsd/string/*.c) $(wildcard bsd/libm/*.c)\
sputl.c sgetl.c $(wildcard memory/*.c*)\
 becompat.c __xgetRD.S  ftell.c  fread.c \
$(wildcard bsd/quad/*.c) $(wildcard bsd/gen/*.c) \
$(wildcard bsd/hash/*.c) $(wildcard bsd/xdr/*.c) $(wildcard bsd/gdtoa/*.c) $(wildcard bsd/uuid/*.c)\
 hashtable/src/hash_free.c  hashtable/src/hash.c $(wildcard bsd/libutil/*.c) structures/binary_tree.c \
 netware/apicore.c uname.c nap.c $(wildcard p9rune/*.c) $(wildcard fs-bootinfo/*.c)\
 debug.cc $(wildcard efile/*.cc) __flt_rounds.c fwrite.c cpp_new.cc  fclose.c drivermgr.cc feof.c fputc.c efile/fseek.c rewind.c fflush.c $(wildcard p9fmt/*.c)\
mutex/src/mutex.c mutex/src/arch-$(ARCH)/mutex.c mutex/src/arch-ia32/try_lock.S #structures/btree_core.c structures/bt_modify.c

#Need to move DragonFlyBSD stuff to own directory - l64a/calloc
include $(top_srcdir)/Mk/l4.lib.mk

test:
	@echo SRCS=${SRCS}
	@echo OBJS=${OBJS}
