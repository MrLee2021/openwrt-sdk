# $OpenLDAP$
## This work is part of OpenLDAP Software <http://www.openldap.org/>.
##
## Copyright 1998-2014 The OpenLDAP Foundation.
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted only as authorized by the OpenLDAP
## Public License.
##
## A copy of this license is available in the file LICENSE in the
## top-level directory of the distribution or, alternatively, at
##---------------------------------------------------------------------------
#
# Top-level Makefile template
#

PACKAGE= OpenLDAP
VERSION= 2.4.39
RELEASEDATE= 2014/01/26


SHELL = /bin/sh

top_builddir = ../..

srcdir = .
top_srcdir = ../..

prefix = /usr
exec_prefix = /usr
ldap_subdir = /openldap

bindir = /usr/bin
datarootdir = ${prefix}/share
datadir = /usr/share$(ldap_subdir)
includedir = ${prefix}/include
infodir = /usr/info
libdir = ${exec_prefix}/lib
libexecdir = /usr/lib
localstatedir = /var
mandir = /usr/man
moduledir = /usr/lib$(ldap_subdir)
sbindir = /usr/sbin
sharedstatedir = ${prefix}/com
sysconfdir = /etc$(ldap_subdir)
schemadir = $(sysconfdir)/schema

PLAT = UNIX
EXEEXT = 
OBJEXT = o

BUILD_LIBS_DYNAMIC = shared

SHTOOL = $(top_srcdir)/build/shtool

INSTALL = $(SHTOOL) install -c
INSTALL_PROGRAM = $(INSTALL)
INSTALL_DATA = $(INSTALL) -m 644
INSTALL_SCRIPT = $(INSTALL)

STRIP = -s

LINT = lint
5LINT = 5lint

MKDEP = $(top_srcdir)/build/mkdep $(MKDEPFLAG) \
	-d "$(srcdir)" -c "$(MKDEP_CC)" -m "$(MKDEP_CFLAGS)"
MKDEP_CC	= mipsel-openwrt-linux-uclibc-gcc
MKDEP_CFLAGS = -M

MKVERSION = $(top_srcdir)/build/mkversion -v "$(VERSION)"

LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBRELEASE = 2.4
LIBVERSION = 12:2:10
LTVERSION = -release $(LIBRELEASE) -version-info $(LIBVERSION)

# libtool --only flag for libraries: platform specific
NT_LTONLY_LIB = # --only-$(BUILD_LIBS_DYNAMIC)
LTONLY_LIB = $(UNIX_LTONLY_LIB)

# libtool --only flag for modules: depends on linkage of module
# The BUILD_MOD macro is defined in each backend Makefile.in file
LTONLY_yes = --tag=disable-shared
LTONLY_mod = --tag=disable-static
LTONLY_MOD = $(LTONLY_$(BUILD_MOD))

# platform-specific libtool flags
NT_LTFLAGS_LIB = -no-undefined -avoid-version -rpath $(libdir)
NT_LTFLAGS_MOD = -no-undefined -avoid-version -rpath $(moduledir)
UNIX_LTFLAGS_LIB = $(LTVERSION) -rpath $(libdir)
UNIX_LTFLAGS_MOD = $(LTVERSION) -rpath $(moduledir)

# libtool flags
LTFLAGS     = $(UNIX_LTFLAGS)
LTFLAGS_LIB = $(UNIX_LTFLAGS_LIB)
LTFLAGS_MOD = $(UNIX_LTFLAGS_MOD)

# LIB_DEFS defined in liblber and libldap Makefile.in files.
# MOD_DEFS defined in backend Makefile.in files.

# platform-specific LINK_LIBS defined in various Makefile.in files.
# LINK_LIBS referenced in library and module link commands.
LINK_LIBS = $(MOD_LIBS) $(UNIX_LINK_LIBS)

LTSTATIC = 

LTLINK   = $(LIBTOOL) --mode=link \
	$(CC) $(LTSTATIC) $(LT_CFLAGS) $(LDFLAGS) $(LTFLAGS)

LTCOMPILE_LIB = $(LIBTOOL) $(LTONLY_LIB) --mode=compile \
	$(CC) $(LT_CFLAGS) $(LT_CPPFLAGS) $(LIB_DEFS) -c

LTLINK_LIB = $(LIBTOOL) $(LTONLY_LIB) --mode=link \
	$(CC) $(LT_CFLAGS) $(LDFLAGS) $(LTFLAGS_LIB)

LTCOMPILE_MOD = $(LIBTOOL) $(LTONLY_MOD) --mode=compile \
	$(CC) $(LT_CFLAGS) $(LT_CPPFLAGS) $(MOD_DEFS) -c

LTLINK_MOD = $(LIBTOOL) $(LTONLY_MOD) --mode=link \
	$(CC) $(LT_CFLAGS) $(LDFLAGS) $(LTFLAGS_MOD)

LTINSTALL = $(LIBTOOL) --mode=install $(INSTALL) 
LTFINISH = $(LIBTOOL) --mode=finish

# Misc UNIX commands used in build environment
AR = mipsel-openwrt-linux-uclibc-ar
BASENAME = basename
CAT = cat
CHMOD = chmod
DATE = date
ECHO = $(SHTOOL) echo
HOSTNAME = $(SHTOOL) echo -e "%h%d"
LN = $(SHTOOL) mkln
LN_H = $(LN)
LN_S = $(LN) -s
MAKEINFO = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run makeinfo
MKDIR = $(SHTOOL) mkdir -p
MV = $(SHTOOL) move
PWD = pwd
RANLIB = mipsel-openwrt-linux-uclibc-ranlib
RM = rm -f
SED = sed
SUBST = $(SHTOOL) subst

# For manual pages
# MANCOMPRESS=@MANCOMPRESS@
# MANCOMPRESSSUFFIX=@MANCOMPRESSSUFFIX@
MANCOMPRESS=$(CAT)
MANCOMPRESSSUFFIX=

SOELIM=soelim

INCLUDEDIR= $(top_srcdir)/include
LDAP_INCPATH= -I$(LDAP_INCDIR) -I$(INCLUDEDIR)
LDAP_LIBDIR= $(top_builddir)/libraries

LUTIL_LIBS = 
LTHREAD_LIBS = 

BDB_LIBS = 
SLAPD_NDB_LIBS = 

LDAP_LIBLBER_LA = $(LDAP_LIBDIR)/liblber/liblber.la
LDAP_LIBLDAP_LA = $(LDAP_LIBDIR)/libldap/libldap.la
LDAP_LIBLDAP_R_LA = $(LDAP_LIBDIR)/libldap_r/libldap_r.la

LDAP_LIBREWRITE_A = $(LDAP_LIBDIR)/librewrite/librewrite.a
LDAP_LIBLUNICODE_A = $(LDAP_LIBDIR)/liblunicode/liblunicode.a
LDAP_LIBLUTIL_A = $(LDAP_LIBDIR)/liblutil/liblutil.a

LDAP_L = $(LDAP_LIBLUTIL_A) \
	$(LDAP_LIBLDAP_LA) $(LDAP_LIBLBER_LA)
SLAPD_L = $(LDAP_LIBLUNICODE_A) $(LDAP_LIBREWRITE_A) \
	$(LDAP_LIBLUTIL_A) $(LDAP_LIBLDAP_R_LA) $(LDAP_LIBLBER_LA)

WRAP_LIBS = 
# AutoConfig generated 
AC_CC	= mipsel-openwrt-linux-uclibc-gcc
AC_CFLAGS = -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kec -mdsp -fno-caller-saves -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float -fpic -lpthread 
AC_DEFS = -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include  # -DHAVE_CONFIG_H
AC_LDFLAGS = -L/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/lib -L/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/lib -L/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/lib -L/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib 
AC_LIBS = 

KRB4_LIBS = 
KRB5_LIBS = 
KRB_LIBS =  
SASL_LIBS = 
TLS_LIBS = 
AUTH_LIBS = 
SECURITY_LIBS = $(SASL_LIBS) $(KRB_LIBS) $(TLS_LIBS) $(AUTH_LIBS)
ICU_LIBS = 

MODULES_CPPFLAGS = 
MODULES_LDFLAGS = 
MODULES_LIBS = 
SLAPD_PERL_LDFLAGS = 

SLAPD_SQL_LDFLAGS = 
SLAPD_SQL_INCLUDES = 
SLAPD_SQL_LIBS = 

SLAPD_LIBS =  -luuid      $(ICU_LIBS)

# Our Defaults
CC = $(AC_CC)
DEFS = $(LDAP_INCPATH) $(XINCPATH) $(XDEFS) $(AC_DEFS) $(DEFINES)
CFLAGS = $(AC_CFLAGS) $(DEFS)
LDFLAGS = $(LDAP_LIBPATH) $(AC_LDFLAGS) $(XLDFLAGS)
LIBS = $(XLIBS) $(XXLIBS) $(AC_LIBS) $(XXXLIBS)

LT_CFLAGS = $(AC_CFLAGS)
LT_CPPFLAGS = $(DEFS)

all:		all-common all-local FORCE
install:	install-common install-local FORCE
clean:		clean-common clean-local FORCE
veryclean:	veryclean-common veryclean-local FORCE
depend:		depend-common depend-local FORCE

# empty common rules
all-common:
install-common:
clean-common:
veryclean-common:	clean-common FORCE
depend-common:
lint-common:
lint5-common:

# empty local rules
all-local:
install-local:
clean-local:
veryclean-local:	clean-local FORCE
depend-local:
lint-local:
lint5-local:

veryclean: FORCE
	$(RM) Makefile
	$(RM) -r .libs

Makefile: Makefile.in $(top_srcdir)/build/top.mk

pathtest:
	$(SHTOOL) --version

# empty rule for forcing rules
FORCE:

##---------------------------------------------------------------------------

# Makefile.in for LDAP -llunicode
# $OpenLDAP$
## This work is part of OpenLDAP Software <http://www.openldap.org/>.
##
## Copyright 1998-2014 The OpenLDAP Foundation.
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted only as authorized by the OpenLDAP
## Public License.
##
## A copy of this license is available in the file LICENSE in the
## top-level directory of the distribution or, alternatively, at
## <http://www.OpenLDAP.org/license.html>.

SHELL = /bin/bash

LIBRARY = liblunicode.a

XXDIR = $(srcdir)/ucdata/
XXHEADERS = ucdata.h ure.h uctable.h

XXSRCS	= ucdata.c ucgendat.c ure.c urestubs.c
SRCS	= ucstr.c
OBJS	= ucdata.o ure.o urestubs.o ucstr.o

XLIB = $(LIBRARY)
XLIBS = $(LDAP_LIBLUTIL_A) $(LDAP_LIBLBER_LA)
#PROGRAMS = ucgendat

LDAP_INCDIR= ../../include       
LDAP_LIBDIR= ../../libraries

uctable.h: $(XXDIR)/uctable.h

$(XXDIR)/uctable.h: $(XXDIR)/ucgendat.c $(srcdir)/UnicodeData.txt $(srcdir)/CompositionExclusions.txt
	$(MAKE) ucgendat
	./ucgendat $(srcdir)/UnicodeData.txt -x $(srcdir)/CompositionExclusions.txt

ucgendat: $(XLIBS) ucgendat.o
	$(LTLINK) -o $@ ucgendat.o $(LIBS)

.links :
	@for i in $(XXSRCS) $(XXHEADERS); do \
		$(RM) $$i ; \
		ii=`find $(srcdir) -name $$i` ; \
		$(LN_S) $$ii . ; \
	done
	touch .links

$(XXSRCS) $(XXHEADERS) : .links

clean-local: FORCE
	@$(RM) *.dat .links $(XXHEADERS) ucgendat

depend-common: .links
# $OpenLDAP$
## This work is part of OpenLDAP Software <http://www.openldap.org/>.
##
## Copyright 1998-2014 The OpenLDAP Foundation.
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted only as authorized by the OpenLDAP
## Public License.
##
## A copy of this license is available in the file LICENSE in the
## top-level directory of the distribution or, alternatively, at
## <http://www.OpenLDAP.org/license.html>.
##---------------------------------------------------------------------------
#
# Makefile Template for Libraries
#

all-common: $(LIBRARY) $(PROGRAMS)

version.c: Makefile
	$(RM) $@
	$(MKVERSION) $(LIBRARY) > $@

version.o version.lo: version.c $(OBJS)

install-common: FORCE

lint: lint-local FORCE
	$(LINT) $(DEFS) $(DEFINES) $(SRCS)

lint5: lint5-local FORCE
	$(5LINT) $(DEFS) $(DEFINES) $(SRCS)

#
# In the mingw/cygwin environment, the so and dll files must be
# deleted separately, instead of using the {.so*,*.dll} construct
# that was previously used. It just didn't work.
#
clean-common: 	FORCE
	$(RM) $(LIBRARY) ../$(LIBRARY) $(XLIBRARY) \
		$(PROGRAMS) $(XPROGRAMS) $(XSRCS) $(XXSRCS) \
		*.o *.lo a.out *.exe core version.c .libs/*

depend-common: FORCE
	$(MKDEP) $(DEFS) $(DEFINES) $(SRCS) $(XXSRCS)

lint-local: FORCE
lint5-local: FORCE

Makefile: $(top_srcdir)/build/lib.mk

# $OpenLDAP$
## This work is part of OpenLDAP Software <http://www.openldap.org/>.
##
## Copyright 1998-2014 The OpenLDAP Foundation.
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted only as authorized by the OpenLDAP
## Public License.
##
## A copy of this license is available in the file LICENSE in the
## top-level directory of the distribution or, alternatively, at
## <http://www.OpenLDAP.org/license.html>.
##---------------------------------------------------------------------------
#
# Makefile Template for Static Libraries
#

$(LIBRARY): version.o
	$(AR) ru $@ $(OBJS) version.o
	@$(RANLIB) $@

Makefile: $(top_srcdir)/build/lib-static.mk
# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.


#
# files: -I../../include -I../../include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include ucstr.c ucdata.c ucgendat.c ure.c urestubs.c
# command: mipsel-openwrt-linux-uclibc-gcc -M -I.  -I../../include -I../../include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include ucstr.c ucdata.c ucgendat.c ure.c urestubs.c
#

ucstr.o: ucstr.c
ucstr.o: ../../include/portable.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
ucstr.o: ../../include/ac/fdset.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
ucstr.o: ../../include/ldap_cdefs.h
ucstr.o: ../../include/ldap_features.h
ucstr.o: ../../include/ac/assert.h
ucstr.o: ../../include/ac/localize.h
ucstr.o: ../../include/ac/bytes.h
ucstr.o: ../../include/ac/ctype.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/ctype.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_touplow.h
ucstr.o: ../../include/ac/string.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
ucstr.o: ../../include/ac/stdlib.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
ucstr.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
ucstr.o: ../../include/lber_pvt.h
ucstr.o: ../../include/lber.h
ucstr.o: ../../include/lber_types.h
ucstr.o: ../../include/ldap_cdefs.h
ucstr.o: ../../include/ldap_utf8.h
ucstr.o: ../../include/ldap_pvt_uc.h
ucstr.o: ../../include/../libraries/liblunicode/ucdata/ucdata.h
ucdata.o: ucdata.c
ucdata.o: ../../include/portable.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
ucdata.o: ../../include/ac/fdset.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
ucdata.o: ../../include/ldap_cdefs.h
ucdata.o: ../../include/ldap_features.h
ucdata.o: ../../include/ac/assert.h
ucdata.o: ../../include/ac/localize.h
ucdata.o: ../../include/ldap_config.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
ucdata.o: ../../include/ac/stdlib.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
ucdata.o: ../../include/ac/string.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
ucdata.o: ../../include/ac/unistd.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/unistd.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix_opt.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/confname.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/getopt.h
ucdata.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/getopt.h
ucdata.o: ../../include/lutil_lockf.h
ucdata.o: ../../include/ac/bytes.h
ucdata.o: ../../include/lber_pvt.h
ucdata.o: ../../include/lber.h
ucdata.o: ../../include/lber_types.h
ucdata.o: ../../include/ldap_cdefs.h
ucdata.o: ucdata.h
ucdata.o: uctable.h
ucgendat.o: ucgendat.c
ucgendat.o: ../../include/portable.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
ucgendat.o: ../../include/ac/fdset.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
ucgendat.o: ../../include/ldap_cdefs.h
ucgendat.o: ../../include/ldap_features.h
ucgendat.o: ../../include/ac/assert.h
ucgendat.o: ../../include/ac/localize.h
ucgendat.o: ../../include/ldap_config.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
ucgendat.o: ../../include/ac/ctype.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/ctype.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_touplow.h
ucgendat.o: ../../include/ac/stdlib.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
ucgendat.o: ../../include/ac/string.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
ucgendat.o: ../../include/ac/unistd.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/unistd.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix_opt.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/confname.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/getopt.h
ucgendat.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/getopt.h
ucgendat.o: ../../include/lutil_lockf.h
ucgendat.o: ../../include/ac/bytes.h
ucgendat.o: ../../include/lutil.h
ucgendat.o: ../../include/ldap_cdefs.h
ucgendat.o: ../../include/lber_types.h
ure.o: ure.c
ure.o: ../../include/portable.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
ure.o: ../../include/ac/fdset.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
ure.o: ../../include/ldap_cdefs.h
ure.o: ../../include/ldap_features.h
ure.o: ../../include/ac/assert.h
ure.o: ../../include/ac/localize.h
ure.o: ../../include/ac/stdlib.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
ure.o: ../../include/ac/string.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
ure.o: ../../include/ac/unistd.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/unistd.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix_opt.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/confname.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/getopt.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/getopt.h
ure.o: ../../include/lutil_lockf.h
ure.o: ure.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
ure.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
urestubs.o: urestubs.c
urestubs.o: ../../include/portable.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
urestubs.o: ../../include/ac/fdset.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
urestubs.o: ../../include/ldap_cdefs.h
urestubs.o: ../../include/ldap_features.h
urestubs.o: ../../include/ac/assert.h
urestubs.o: ../../include/ac/localize.h
urestubs.o: ../../include/ac/bytes.h
urestubs.o: ure.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
urestubs.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
urestubs.o: ucdata.h

# IF YOU PUT ANYTHING HERE IT WILL GO AWAY
