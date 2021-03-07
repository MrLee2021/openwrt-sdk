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

top_builddir = ../../..

srcdir = .
top_srcdir = ../../..

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

# Makefile.in for overlays
# $OpenLDAP$
## This work is part of OpenLDAP Software <http://www.openldap.org/>.
##
## Copyright 2003-2014 The OpenLDAP Foundation.
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

SRCS = overlays.c \
	accesslog.c \
	auditlog.c \
	constraint.c \
	dds.c \
	deref.c \
	dyngroup.c \
	dynlist.c \
	memberof.c \
	pcache.c \
	collect.c \
	ppolicy.c \
	refint.c \
	retcode.c \
	rwm.c rwmconf.c rwmdn.c rwmmap.c \
	seqmod.c \
	sssvlv.c \
	syncprov.c \
	translucent.c \
	unique.c \
	valsort.c
OBJS = statover.o \
	 syncprov.o \
	overlays.o

# Add here the objs that are needed by overlays, but do not make it
# into SLAPD_STATIC_OVERLAYS...
OBJDEP=rwm.o rwmconf.o rwmdn.o rwmmap.o

LTONLY_MOD = $(LTONLY_mod)
LDAP_INCDIR= ../../../include       
LDAP_LIBDIR= ../../../libraries

MOD_DEFS = -DSLAPD_IMPORT

shared_LDAP_LIBS = $(LDAP_LIBLDAP_R_LA) $(LDAP_LIBLBER_LA)
NT_LINK_LIBS = -L.. -lslapd $(shared_LDAP_LIBS)
UNIX_LINK_LIBS = $(shared_LDAP_LIBS)

LIBRARY = ../liboverlays.a
PROGRAMS = 

XINCPATH = -I.. -I$(srcdir)/..
XDEFS = $(MODULES_CPPFLAGS)

static:	$(LIBRARY)

dynamic: $(PROGRAMS)

accesslog.la : accesslog.lo
	$(LTLINK_MOD) -module -o $@ accesslog.lo version.lo $(LINK_LIBS)

auditlog.la : auditlog.lo
	$(LTLINK_MOD) -module -o $@ auditlog.lo version.lo $(LINK_LIBS)

constraint.la : constraint.lo
	$(LTLINK_MOD) -module -o $@ constraint.lo version.lo $(LINK_LIBS)

dds.la : dds.lo
	$(LTLINK_MOD) -module -o $@ dds.lo version.lo $(LINK_LIBS)

deref.la : deref.lo
	$(LTLINK_MOD) -module -o $@ deref.lo version.lo $(LINK_LIBS)

dyngroup.la : dyngroup.lo
	$(LTLINK_MOD) -module -o $@ dyngroup.lo version.lo $(LINK_LIBS)

dynlist.la : dynlist.lo
	$(LTLINK_MOD) -module -o $@ dynlist.lo version.lo $(LINK_LIBS)

memberof.la : memberof.lo
	$(LTLINK_MOD) -module -o $@ memberof.lo version.lo $(LINK_LIBS)

pcache.la : pcache.lo
	$(LTLINK_MOD) -module -o $@ pcache.lo version.lo $(LINK_LIBS)

collect.la : collect.lo
	$(LTLINK_MOD) -module -o $@ collect.lo version.lo $(LINK_LIBS)

ppolicy.la : ppolicy.lo
	$(LTLINK_MOD) -module -o $@ ppolicy.lo version.lo $(LINK_LIBS) $(MODULES_LIBS)

refint.la : refint.lo
	$(LTLINK_MOD) -module -o $@ refint.lo version.lo $(LINK_LIBS)

retcode.la : retcode.lo
	$(LTLINK_MOD) -module -o $@ retcode.lo version.lo $(LINK_LIBS)

rwm_x.o: rwm.o rwmconf.o rwmdn.o rwmmap.o
	$(LD) -r -o $@ rwm.o rwmconf.o rwmdn.o rwmmap.o

rwm.la : rwm.lo rwmconf.lo rwmdn.lo rwmmap.lo
	$(LTLINK_MOD) -module -o $@ rwm.lo rwmconf.lo rwmdn.lo rwmmap.lo version.lo $(LINK_LIBS)

seqmod.la : seqmod.lo
	$(LTLINK_MOD) -module -o $@ seqmod.lo version.lo $(LINK_LIBS)

sssvlv.la : sssvlv.lo
	$(LTLINK_MOD) -module -o $@ sssvlv.lo version.lo $(LINK_LIBS)

syncprov.la : syncprov.lo
	$(LTLINK_MOD) -module -o $@ syncprov.lo version.lo $(LINK_LIBS)

translucent.la : translucent.lo
	$(LTLINK_MOD) -module -o $@ translucent.lo version.lo $(LINK_LIBS)

unique.la : unique.lo
	$(LTLINK_MOD) -module -o $@ unique.lo version.lo $(LINK_LIBS)

valsort.la : valsort.lo
	$(LTLINK_MOD) -module -o $@ valsort.lo version.lo $(LINK_LIBS)

install-local:	$(PROGRAMS)
	@if test -n "$?" ; then \
		$(MKDIR) $(DESTDIR)$(moduledir); \
		$(LTINSTALL) $(INSTALLFLAGS) -m 755 $? $(DESTDIR)$(moduledir);\
	fi

MKDEPFLAG = -l

.SUFFIXES: .c .o .lo

.c.lo:
	$(LTCOMPILE_MOD) $<

statover.o: statover.c $(srcdir)/../slap.h

$(LIBRARY): $(OBJS) version.lo
	$(AR) rs $@ $(OBJS)

# Must fixup depends for non-libtool objects
depend-local: depend-common
	@if test -n "$(OBJS)"; then \
	OBJ2=`echo $(OBJS) $(OBJDEP) | $(SED) -e 's/\.o//g'`; \
	SCR=''; for i in $$OBJ2; do SCR="$$SCR -e s/^$$i.lo:/$$i.o:/"; done; \
	mv Makefile Makefile.bak; $(SED) $$SCR Makefile.bak > Makefile && \
	$(RM) Makefile.bak; fi

veryclean-local:
	$(RM) statover.c

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

# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.


#
# files: -I../../../include -I../../../include -I.. -I./.. -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include overlays.c accesslog.c auditlog.c constraint.c dds.c deref.c dyngroup.c dynlist.c memberof.c pcache.c collect.c ppolicy.c refint.c retcode.c rwm.c rwmconf.c rwmdn.c rwmmap.c seqmod.c sssvlv.c syncprov.c translucent.c unique.c valsort.c
# command: mipsel-openwrt-linux-uclibc-gcc -M -I.  -I../../../include -I../../../include -I.. -I./.. -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include overlays.c accesslog.c auditlog.c constraint.c dds.c deref.c dyngroup.c dynlist.c memberof.c pcache.c collect.c ppolicy.c refint.c retcode.c rwm.c rwmconf.c rwmdn.c rwmmap.c seqmod.c sssvlv.c syncprov.c translucent.c unique.c valsort.c
#

overlays.o: overlays.c
overlays.o: ../../../include/portable.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
overlays.o: ../../../include/ac/fdset.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
overlays.o: ../../../include/ldap_cdefs.h
overlays.o: ../../../include/ldap_features.h
overlays.o: ../../../include/ac/assert.h
overlays.o: ../../../include/ac/localize.h
overlays.o: ../slap.h
overlays.o: ../../../include/ldap_defaults.h
overlays.o: ../../../include/ldap_config.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
overlays.o: ../../../include/ac/stdlib.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
overlays.o: ../../../include/ac/syslog.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/syslog.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/syslog.h
overlays.o: ../../../include/ac/regex.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/regex.h
overlays.o: ../../../include/ac/signal.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/signum.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/siginfo.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigaction.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigcontext.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigstack.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigthread.h
overlays.o: ../../../include/ac/socket.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/poll.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/poll.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/poll.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/socket.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/uio.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uio.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/socket.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sockaddr.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/socket.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/sockios.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/ioctl.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm-generic/ioctl.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netinet/in.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdint.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdint.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/in.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netinet/tcp.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/inet.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/nameser.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/param.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/param.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/param.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm-generic/param.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/bitypes.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/nameser_compat.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netdb.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/netdb.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/resolv.h
overlays.o: ../../../include/ac/time.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/time.h
overlays.o: ../../../include/ac/param.h
overlays.o: ../../../include/ac/unistd.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/unistd.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix_opt.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/confname.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/getopt.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/getopt.h
overlays.o: ../../../include/lutil_lockf.h
overlays.o: ../../../include/avl.h
overlays.o: ../../../include/ldap_cdefs.h
overlays.o: ../../../include/ldap_log.h
overlays.o: ../../../include/ldap.h
overlays.o: ../../../include/lber.h
overlays.o: ../../../include/lber_types.h
overlays.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
overlays.o: ../../../include/ldap_features.h
overlays.o: ../../../include/ldap_schema.h
overlays.o: ../../../include/lber_pvt.h
overlays.o: ../../../include/ldap_pvt.h
overlays.o: ../../../include/ldap_pvt_uc.h
overlays.o: ../../../include/ac/bytes.h
overlays.o: ../../../include/../libraries/liblunicode/ucdata/ucdata.h
overlays.o: ../../../include/ldap_pvt_thread.h
overlays.o: ../../../include/ldap_int_thread.h
overlays.o: ../../../include/ldap_queue.h
overlays.o: ../proto-slap.h
accesslog.lo: accesslog.c
accesslog.lo: ../../../include/portable.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
accesslog.lo: ../../../include/ac/fdset.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
accesslog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
accesslog.lo: ../../../include/ldap_cdefs.h
accesslog.lo: ../../../include/ldap_features.h
accesslog.lo: ../../../include/ac/assert.h
accesslog.lo: ../../../include/ac/localize.h
auditlog.lo: auditlog.c
auditlog.lo: ../../../include/portable.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
auditlog.lo: ../../../include/ac/fdset.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
auditlog.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
auditlog.lo: ../../../include/ldap_cdefs.h
auditlog.lo: ../../../include/ldap_features.h
auditlog.lo: ../../../include/ac/assert.h
auditlog.lo: ../../../include/ac/localize.h
constraint.lo: constraint.c
constraint.lo: ../../../include/portable.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
constraint.lo: ../../../include/ac/fdset.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
constraint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
constraint.lo: ../../../include/ldap_cdefs.h
constraint.lo: ../../../include/ldap_features.h
constraint.lo: ../../../include/ac/assert.h
constraint.lo: ../../../include/ac/localize.h
dds.lo: dds.c
dds.lo: ../../../include/portable.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
dds.lo: ../../../include/ac/fdset.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
dds.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
dds.lo: ../../../include/ldap_cdefs.h
dds.lo: ../../../include/ldap_features.h
dds.lo: ../../../include/ac/assert.h
dds.lo: ../../../include/ac/localize.h
deref.lo: deref.c
deref.lo: ../../../include/portable.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
deref.lo: ../../../include/ac/fdset.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
deref.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
deref.lo: ../../../include/ldap_cdefs.h
deref.lo: ../../../include/ldap_features.h
deref.lo: ../../../include/ac/assert.h
deref.lo: ../../../include/ac/localize.h
dyngroup.lo: dyngroup.c
dyngroup.lo: ../../../include/portable.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
dyngroup.lo: ../../../include/ac/fdset.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
dyngroup.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
dyngroup.lo: ../../../include/ldap_cdefs.h
dyngroup.lo: ../../../include/ldap_features.h
dyngroup.lo: ../../../include/ac/assert.h
dyngroup.lo: ../../../include/ac/localize.h
dynlist.lo: dynlist.c
dynlist.lo: ../../../include/portable.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
dynlist.lo: ../../../include/ac/fdset.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
dynlist.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
dynlist.lo: ../../../include/ldap_cdefs.h
dynlist.lo: ../../../include/ldap_features.h
dynlist.lo: ../../../include/ac/assert.h
dynlist.lo: ../../../include/ac/localize.h
memberof.lo: memberof.c
memberof.lo: ../../../include/portable.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
memberof.lo: ../../../include/ac/fdset.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
memberof.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
memberof.lo: ../../../include/ldap_cdefs.h
memberof.lo: ../../../include/ldap_features.h
memberof.lo: ../../../include/ac/assert.h
memberof.lo: ../../../include/ac/localize.h
pcache.lo: pcache.c
pcache.lo: ../../../include/portable.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
pcache.lo: ../../../include/ac/fdset.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
pcache.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
pcache.lo: ../../../include/ldap_cdefs.h
pcache.lo: ../../../include/ldap_features.h
pcache.lo: ../../../include/ac/assert.h
pcache.lo: ../../../include/ac/localize.h
collect.lo: collect.c
collect.lo: ../../../include/portable.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
collect.lo: ../../../include/ac/fdset.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
collect.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
collect.lo: ../../../include/ldap_cdefs.h
collect.lo: ../../../include/ldap_features.h
collect.lo: ../../../include/ac/assert.h
collect.lo: ../../../include/ac/localize.h
ppolicy.lo: ppolicy.c
ppolicy.lo: ../../../include/portable.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
ppolicy.lo: ../../../include/ac/fdset.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
ppolicy.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
ppolicy.lo: ../../../include/ldap_cdefs.h
ppolicy.lo: ../../../include/ldap_features.h
ppolicy.lo: ../../../include/ac/assert.h
ppolicy.lo: ../../../include/ac/localize.h
refint.lo: refint.c
refint.lo: ../../../include/portable.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
refint.lo: ../../../include/ac/fdset.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
refint.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
refint.lo: ../../../include/ldap_cdefs.h
refint.lo: ../../../include/ldap_features.h
refint.lo: ../../../include/ac/assert.h
refint.lo: ../../../include/ac/localize.h
retcode.lo: retcode.c
retcode.lo: ../../../include/portable.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
retcode.lo: ../../../include/ac/fdset.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
retcode.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
retcode.lo: ../../../include/ldap_cdefs.h
retcode.lo: ../../../include/ldap_features.h
retcode.lo: ../../../include/ac/assert.h
retcode.lo: ../../../include/ac/localize.h
rwm.o: rwm.c
rwm.o: ../../../include/portable.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
rwm.o: ../../../include/ac/fdset.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
rwm.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
rwm.o: ../../../include/ldap_cdefs.h
rwm.o: ../../../include/ldap_features.h
rwm.o: ../../../include/ac/assert.h
rwm.o: ../../../include/ac/localize.h
rwmconf.o: rwmconf.c
rwmconf.o: ../../../include/portable.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
rwmconf.o: ../../../include/ac/fdset.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
rwmconf.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
rwmconf.o: ../../../include/ldap_cdefs.h
rwmconf.o: ../../../include/ldap_features.h
rwmconf.o: ../../../include/ac/assert.h
rwmconf.o: ../../../include/ac/localize.h
rwmdn.o: rwmdn.c
rwmdn.o: ../../../include/portable.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
rwmdn.o: ../../../include/ac/fdset.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
rwmdn.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
rwmdn.o: ../../../include/ldap_cdefs.h
rwmdn.o: ../../../include/ldap_features.h
rwmdn.o: ../../../include/ac/assert.h
rwmdn.o: ../../../include/ac/localize.h
rwmmap.o: rwmmap.c
rwmmap.o: ../../../include/portable.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
rwmmap.o: ../../../include/ac/fdset.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
rwmmap.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
rwmmap.o: ../../../include/ldap_cdefs.h
rwmmap.o: ../../../include/ldap_features.h
rwmmap.o: ../../../include/ac/assert.h
rwmmap.o: ../../../include/ac/localize.h
seqmod.lo: seqmod.c
seqmod.lo: ../../../include/portable.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
seqmod.lo: ../../../include/ac/fdset.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
seqmod.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
seqmod.lo: ../../../include/ldap_cdefs.h
seqmod.lo: ../../../include/ldap_features.h
seqmod.lo: ../../../include/ac/assert.h
seqmod.lo: ../../../include/ac/localize.h
sssvlv.lo: sssvlv.c
sssvlv.lo: ../../../include/portable.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
sssvlv.lo: ../../../include/ac/fdset.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
sssvlv.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
sssvlv.lo: ../../../include/ldap_cdefs.h
sssvlv.lo: ../../../include/ldap_features.h
sssvlv.lo: ../../../include/ac/assert.h
sssvlv.lo: ../../../include/ac/localize.h
syncprov.o: syncprov.c
syncprov.o: ../../../include/portable.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
syncprov.o: ../../../include/ac/fdset.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
syncprov.o: ../../../include/ldap_cdefs.h
syncprov.o: ../../../include/ldap_features.h
syncprov.o: ../../../include/ac/assert.h
syncprov.o: ../../../include/ac/localize.h
syncprov.o: ../../../include/ac/string.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/string.h
syncprov.o: ../../../include/lutil.h
syncprov.o: ../../../include/ldap_cdefs.h
syncprov.o: ../../../include/lber_types.h
syncprov.o: ../slap.h
syncprov.o: ../../../include/ldap_defaults.h
syncprov.o: ../../../include/ldap_config.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdio.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_stdio.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/wchar.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wchar.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_mutex.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/pthread.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sched.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/time.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sched.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/time.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_clk_tck.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/signal.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigset.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/setjmp.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_pthread.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/stdio_lim.h
syncprov.o: ../../../include/ac/stdlib.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdlib.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/types.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/select.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/select.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/sysmacros.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/alloca.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/limits.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include-fixed/syslimits.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/limits.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix1_lim.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/local_lim.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/limits.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_local_lim.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix2_lim.h
syncprov.o: ../../../include/ac/syslog.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/syslog.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/syslog.h
syncprov.o: ../../../include/ac/regex.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/regex.h
syncprov.o: ../../../include/ac/signal.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/signum.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/siginfo.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigaction.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigcontext.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigstack.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sigthread.h
syncprov.o: ../../../include/ac/socket.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/poll.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/poll.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/poll.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/socket.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/uio.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uio.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/socket.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/sockaddr.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/socket.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/sockios.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/ioctl.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm-generic/ioctl.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netinet/in.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdint.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/stdint.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/in.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netinet/tcp.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/inet.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/nameser.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/param.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/linux/param.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm/param.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/asm-generic/param.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/bitypes.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/arpa/nameser_compat.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/netdb.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/netdb.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/resolv.h
syncprov.o: ../../../include/ac/time.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/time.h
syncprov.o: ../../../include/ac/param.h
syncprov.o: ../../../include/ac/unistd.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/unistd.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/posix_opt.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/confname.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/getopt.h
syncprov.o: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/getopt.h
syncprov.o: ../../../include/lutil_lockf.h
syncprov.o: ../../../include/avl.h
syncprov.o: ../../../include/ldap_log.h
syncprov.o: ../../../include/ldap.h
syncprov.o: ../../../include/lber.h
syncprov.o: ../../../include/ldap_features.h
syncprov.o: ../../../include/ldap_schema.h
syncprov.o: ../../../include/lber_pvt.h
syncprov.o: ../../../include/ldap_pvt.h
syncprov.o: ../../../include/ldap_pvt_uc.h
syncprov.o: ../../../include/ac/bytes.h
syncprov.o: ../../../include/../libraries/liblunicode/ucdata/ucdata.h
syncprov.o: ../../../include/ldap_pvt_thread.h
syncprov.o: ../../../include/ldap_int_thread.h
syncprov.o: ../../../include/ldap_queue.h
syncprov.o: ../proto-slap.h
syncprov.o: ../config.h
syncprov.o: ../../../include/ldap_rq.h
translucent.lo: translucent.c
translucent.lo: ../../../include/portable.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
translucent.lo: ../../../include/ac/fdset.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
translucent.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
translucent.lo: ../../../include/ldap_cdefs.h
translucent.lo: ../../../include/ldap_features.h
translucent.lo: ../../../include/ac/assert.h
translucent.lo: ../../../include/ac/localize.h
unique.lo: unique.c
unique.lo: ../../../include/portable.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
unique.lo: ../../../include/ac/fdset.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
unique.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
unique.lo: ../../../include/ldap_cdefs.h
unique.lo: ../../../include/ldap_features.h
unique.lo: ../../../include/ac/assert.h
unique.lo: ../../../include/ac/localize.h
valsort.lo: valsort.c
valsort.lo: ../../../include/portable.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stddef.h
valsort.lo: ../../../include/ac/fdset.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/types.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/features.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/uClibc_config.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sys/cdefs.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/wordsize.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/typesizes.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/pthreadtypes.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/endian.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/endian.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/byteswap.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/bits/byteswap-common.h
valsort.lo: /home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include/sgidefs.h
valsort.lo: ../../../include/ldap_cdefs.h
valsort.lo: ../../../include/ldap_features.h
valsort.lo: ../../../include/ac/assert.h
valsort.lo: ../../../include/ac/localize.h

# IF YOU PUT ANYTHING HERE IT WILL GO AWAY
