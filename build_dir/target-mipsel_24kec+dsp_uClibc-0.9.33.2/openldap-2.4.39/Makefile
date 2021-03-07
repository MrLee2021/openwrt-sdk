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

top_builddir = .

srcdir = .
top_srcdir = .

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

# Makefile.in generated by automake 1.11.6 from Makefile.am.
# Makefile.  Generated from dir.mk by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software
# Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



am__make_dryrun = \
  { \
    am__dry=no; \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        echo 'am--echo: ; @echo "AM"  OK' | $(MAKE) -f - 2>/dev/null \
          | grep '^AM OK$$' >/dev/null || am__dry=yes;; \
      *) \
        for am__flg in $$MAKEFLAGS; do \
          case $$am__flg in \
            *=*|--*) ;; \
            *n*) am__dry=yes; break;; \
          esac; \
        done;; \
    esac; \
    test $$am__dry = yes; \
  }
pkgdatadir = $(datadir)/OpenLDAP
pkgincludedir = $(includedir)/OpenLDAP
pkglibdir = $(libdir)/OpenLDAP
pkglibexecdir = $(libexecdir)/OpenLDAP
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = mipsel-openwrt-linux-gnu
target_triplet = mipsel-openwrt-linux-gnu
subdir = .
DIST_COMMON = README $(am__configure_deps) $(srcdir)/Makefile.am \
	$(srcdir)/Makefile.in $(top_srcdir)/build/dir.mk \
	$(top_srcdir)/build/lib-shared.mk \
	$(top_srcdir)/build/lib-static.mk $(top_srcdir)/build/lib.mk \
	$(top_srcdir)/build/man.mk $(top_srcdir)/build/mod.mk \
	$(top_srcdir)/build/rules.mk $(top_srcdir)/build/srv.mk \
	$(top_srcdir)/build/top.mk $(top_srcdir)/clients/Makefile.in \
	$(top_srcdir)/clients/tools/Makefile.in \
	$(top_srcdir)/configure $(top_srcdir)/doc/Makefile.in \
	$(top_srcdir)/doc/man/Makefile.in \
	$(top_srcdir)/doc/man/man1/Makefile.in \
	$(top_srcdir)/doc/man/man3/Makefile.in \
	$(top_srcdir)/doc/man/man5/Makefile.in \
	$(top_srcdir)/doc/man/man8/Makefile.in \
	$(top_srcdir)/include/Makefile.in \
	$(top_srcdir)/include/lber_types.hin \
	$(top_srcdir)/include/ldap_features.hin \
	$(top_srcdir)/include/portable.hin \
	$(top_srcdir)/libraries/Makefile.in \
	$(top_srcdir)/libraries/liblber/Makefile.in \
	$(top_srcdir)/libraries/libldap/Makefile.in \
	$(top_srcdir)/libraries/libldap_r/Makefile.in \
	$(top_srcdir)/libraries/liblunicode/Makefile.in \
	$(top_srcdir)/libraries/liblutil/Makefile.in \
	$(top_srcdir)/libraries/librewrite/Makefile.in \
	$(top_srcdir)/servers/Makefile.in \
	$(top_srcdir)/servers/slapd/Makefile.in \
	$(top_srcdir)/servers/slapd/back-bdb/Makefile.in \
	$(top_srcdir)/servers/slapd/back-dnssrv/Makefile.in \
	$(top_srcdir)/servers/slapd/back-hdb/Makefile.in \
	$(top_srcdir)/servers/slapd/back-ldap/Makefile.in \
	$(top_srcdir)/servers/slapd/back-ldif/Makefile.in \
	$(top_srcdir)/servers/slapd/back-mdb/Makefile.in \
	$(top_srcdir)/servers/slapd/back-meta/Makefile.in \
	$(top_srcdir)/servers/slapd/back-monitor/Makefile.in \
	$(top_srcdir)/servers/slapd/back-ndb/Makefile.in \
	$(top_srcdir)/servers/slapd/back-null/Makefile.in \
	$(top_srcdir)/servers/slapd/back-passwd/Makefile.in \
	$(top_srcdir)/servers/slapd/back-perl/Makefile.in \
	$(top_srcdir)/servers/slapd/back-relay/Makefile.in \
	$(top_srcdir)/servers/slapd/back-shell/Makefile.in \
	$(top_srcdir)/servers/slapd/back-sock/Makefile.in \
	$(top_srcdir)/servers/slapd/back-sql/Makefile.in \
	$(top_srcdir)/servers/slapd/overlays/Makefile.in \
	$(top_srcdir)/servers/slapd/shell-backends/Makefile.in \
	$(top_srcdir)/servers/slapd/slapi/Makefile.in \
	$(top_srcdir)/tests/Makefile.in \
	$(top_srcdir)/tests/progs/Makefile.in \
	$(top_srcdir)/tests/run.in ABOUT-NLS AUTHORS COPYING ChangeLog \
	INSTALL NEWS build/README build/config.guess build/config.sub \
	build/install-sh build/ltmain.sh build/missing config.rpath
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
am__CONFIG_DISTCLEAN_FILES = config.status config.cache config.log \
 configure.lineno config.status.lineno
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/include/portable.h \
	$(top_builddir)/include/ldap_features.h \
	$(top_builddir)/include/lber_types.h
CONFIG_CLEAN_FILES = doc/Makefile doc/man/Makefile \
	doc/man/man1/Makefile doc/man/man3/Makefile \
	doc/man/man5/Makefile doc/man/man8/Makefile clients/Makefile \
	clients/tools/Makefile include/Makefile libraries/Makefile \
	libraries/liblber/Makefile libraries/libldap/Makefile \
	libraries/libldap_r/Makefile libraries/liblunicode/Makefile \
	libraries/liblutil/Makefile libraries/librewrite/Makefile \
	servers/Makefile servers/slapd/Makefile \
	servers/slapd/back-bdb/Makefile \
	servers/slapd/back-dnssrv/Makefile \
	servers/slapd/back-hdb/Makefile \
	servers/slapd/back-ldap/Makefile \
	servers/slapd/back-ldif/Makefile \
	servers/slapd/back-mdb/Makefile \
	servers/slapd/back-meta/Makefile \
	servers/slapd/back-monitor/Makefile \
	servers/slapd/back-ndb/Makefile \
	servers/slapd/back-null/Makefile \
	servers/slapd/back-passwd/Makefile \
	servers/slapd/back-perl/Makefile \
	servers/slapd/back-relay/Makefile \
	servers/slapd/back-shell/Makefile \
	servers/slapd/back-sock/Makefile \
	servers/slapd/back-sql/Makefile \
	servers/slapd/shell-backends/Makefile \
	servers/slapd/slapi/Makefile servers/slapd/overlays/Makefile \
	tests/Makefile tests/run tests/progs/Makefile
CONFIG_CLEAN_VPATH_FILES =
SOURCES =
DIST_SOURCES =
RECURSIVE_TARGETS = all-recursive check-recursive dvi-recursive \
	html-recursive info-recursive install-data-recursive \
	install-dvi-recursive install-exec-recursive \
	install-html-recursive install-info-recursive \
	install-pdf-recursive install-ps-recursive install-recursive \
	installcheck-recursive installdirs-recursive pdf-recursive \
	ps-recursive uninstall-recursive
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
RECURSIVE_CLEAN_TARGETS = mostlyclean-recursive clean-recursive	\
  distclean-recursive maintainer-clean-recursive
AM_RECURSIVE_TARGETS = $(RECURSIVE_TARGETS:-recursive=) \
	$(RECURSIVE_CLEAN_TARGETS:-recursive=) tags TAGS ctags CTAGS \
	distdir dist dist-all distcheck
ETAGS = etags
CTAGS = ctags
DIST_SUBDIRS = $(SUBDIRS)
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
distdir = $(PACKAGE)-$(VERSION)
top_distdir = $(distdir)
am__remove_distdir = \
  if test -d "$(distdir)"; then \
    find "$(distdir)" -type d ! -perm -200 -exec chmod u+w {} ';' \
      && rm -rf "$(distdir)" \
      || { sleep 5 && rm -rf "$(distdir)"; }; \
  else :; fi
am__relativize = \
  dir0=`pwd`; \
  sed_first='s,^\([^/]*\)/.*$$,\1,'; \
  sed_rest='s,^[^/]*/*,,'; \
  sed_last='s,^.*/\([^/]*\)$$,\1,'; \
  sed_butlast='s,/*[^/]*$$,,'; \
  while test -n "$$dir1"; do \
    first=`echo "$$dir1" | sed -e "$$sed_first"`; \
    if test "$$first" != "."; then \
      if test "$$first" = ".."; then \
        dir2=`echo "$$dir0" | sed -e "$$sed_last"`/"$$dir2"; \
        dir0=`echo "$$dir0" | sed -e "$$sed_butlast"`; \
      else \
        first2=`echo "$$dir2" | sed -e "$$sed_first"`; \
        if test "$$first2" = "$$first"; then \
          dir2=`echo "$$dir2" | sed -e "$$sed_rest"`; \
        else \
          dir2="../$$dir2"; \
        fi; \
        dir0="$$dir0"/"$$first"; \
      fi; \
    fi; \
    dir1=`echo "$$dir1" | sed -e "$$sed_rest"`; \
  done; \
  reldir="$$dir2"
DIST_ARCHIVES = $(distdir).tar.gz
GZIP_ENV = --best
distuninstallcheck_listfiles = find . -type f -print
am__distuninstallcheck_listfiles = $(distuninstallcheck_listfiles) \
  | sed 's|^\./|$(prefix)/|' | grep -v '$(infodir)/dir$$'
distcleancheck_listfiles = find . -type f -print
ACLOCAL = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run aclocal-1.11
AMTAR = $${TAR-tar}
AR = mipsel-openwrt-linux-uclibc-ar
AS = mipsel-openwrt-linux-uclibc-gcc -c -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kec -mdsp -fno-caller-saves -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float -fpic -lpthread
AUTH_LIBS = 
AUTOCONF = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run autoconf
AUTOHEADER = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run autoheader
AUTOMAKE = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run automake-1.11
AWK = gawk
BDB_LIBS = 
BUILD_ACCESSLOG = no
BUILD_AUDITLOG = no
BUILD_BDB = no
BUILD_COLLECT = 
BUILD_CONSTRAINT = no
BUILD_DDS = no
BUILD_DENYOP = no
BUILD_DEREF = no
BUILD_DNSSRV = no
BUILD_DYNGROUP = no
BUILD_DYNLIST = no
BUILD_HDB = no
BUILD_LASTMOD = no
BUILD_LDAP = no
BUILD_LIBS_DYNAMIC = shared
BUILD_MDB = yes
BUILD_MEMBEROF = no
BUILD_META = no
BUILD_MONITOR = no
BUILD_NDB = no
BUILD_NULL = yes
BUILD_PASSWD = no
BUILD_PERL = no
BUILD_PPOLICY = no
BUILD_PROXYCACHE = no
BUILD_REFINT = no
BUILD_RELAY = no
BUILD_RETCODE = no
BUILD_RWM = no
BUILD_SEQMOD = no
BUILD_SHELL = no
BUILD_SLAPD = yes
BUILD_SLAPI = no
BUILD_SOCK = no
BUILD_SQL = no
BUILD_SSSVLV = no
BUILD_SYNCPROV = yes
BUILD_THREAD = no
BUILD_TRANSLUCENT = no
BUILD_UNIQUE = no
BUILD_VALSORT = no
CC = mipsel-openwrt-linux-uclibc-gcc
CCDEPMODE = depmode=none
CFLAGS = -Os -pipe -mno-branch-likely -mips32r2 -mtune=24kec -mdsp -fno-caller-saves -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float -fpic -lpthread 
CPP = mipsel-openwrt-linux-uclibc-gcc -E
CPPFLAGS = -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include -I/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = dlltool
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/grep -E
EXEEXT = 
FGREP = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/grep -F
GREP = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/grep
ICU_LIBS = 
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
KRB4_LIBS = 
KRB5_LIBS = 
LD = mipsel-openwrt-linux-uclibc-ld
LDAP_LIBS = 
LDFLAGS = -L/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/lib -L/home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/lib -L/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/lib -L/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib 
LIBOBJS =  ${LIBOBJDIR}setproctitle$U.o ${LIBOBJDIR}getpeereid$U.o
LIBS = 
LIBSLAPI = 
LIBSRCS =  setproctitle.c getpeereid.c
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTHREAD_LIBS = 
LTLIBOBJS =  ${LIBOBJDIR}setproctitle$U.lo ${LIBOBJDIR}getpeereid$U.lo
LTSTATIC = 
LUTIL_LIBS = 
MAKEINFO = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/missing --run makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
MODULES_LIBS = 
MOD_PERL_LDFLAGS = 
MYSQL = 
NM = mipsel-openwrt-linux-uclibc-nm
NMEDIT = 
OBJDUMP = mipsel-openwrt-linux-uclibc-objdump
OBJEXT = o
OL_MKDEP = mipsel-openwrt-linux-uclibc-gcc
OL_MKDEP_FLAGS = -M
OPENLDAP_LIBRELEASE = 2.4
OPENLDAP_LIBVERSION = 12:2:10
OPENLDAP_RELEASE_DATE = 2014/01/26
OTOOL = 
OTOOL64 = 
PACKAGE = OpenLDAP
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_URL = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
PERLBIN = 
PERL_CPPFLAGS = 
PLAT = UNIX
RANLIB = mipsel-openwrt-linux-uclibc-ranlib
SASL_LIBS = 
SED = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/sed
SET_MAKE = 
SHELL = /bin/bash
SLAPD_DYNAMIC_BACKENDS = 
SLAPD_DYNAMIC_OVERLAYS = 
SLAPD_GMP_LIBS = 
SLAPD_LIBS =  -luuid
SLAPD_MODULES_CPPFLAGS = 
SLAPD_MODULES_LDFLAGS = 
SLAPD_NDB_INCS = 
SLAPD_NDB_LIBS = 
SLAPD_NO_STATIC = 
SLAPD_PERL_LDFLAGS = 
SLAPD_SLAPI_DEPEND = 
SLAPD_SLP_LIBS = 
SLAPD_SQL_INCLUDES = 
SLAPD_SQL_LDFLAGS = 
SLAPD_SQL_LIBS = 
SLAPD_STATIC_BACKENDS = back-ldif back-mdb back-null
SLAPD_STATIC_OVERLAYS =  syncprov.o
SLAPI_LIBS = 
STRIP = mipsel-openwrt-linux-uclibc-strip
TLS_LIBS = 
VERSION = 2.4.39
WITH_ACI_ENABLED = no
WITH_MODULES_ENABLED = no
WITH_SASL = no
WITH_TLS = no
WRAP_LIBS = 
abs_builddir = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39
abs_srcdir = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39
abs_top_builddir = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39
abs_top_srcdir = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39
ac_ct_AR = 
ac_ct_CC = 
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = /usr/bin
build = x86_64-pc-linux-gnu
build_alias = x86_64-linux-gnu
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = /usr/share
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE}
dvidir = ${docdir}
exec_prefix = /usr
host = mipsel-openwrt-linux-gnu
host_alias = mipsel-openwrt-linux
host_cpu = mipsel
host_os = linux-gnu
host_vendor = openwrt
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = /usr/info
install_sh = ${SHELL} /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/openldap-2.4.39/build/install-sh
ldap_subdir = /openldap
libdir = ${exec_prefix}/lib
libexecdir = /usr/lib
localedir = ${datarootdir}/locale
localstatedir = /var
mandir = /usr/man
mkdir_p = /bin/mkdir -p
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr
program_transform_name = s&$$&&;s&^&&
psdir = ${docdir}
sbindir = /usr/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = /etc
target = mipsel-openwrt-linux-gnu
target_alias = mipsel-openwrt-linux
target_cpu = mipsel
target_os = linux-gnu
target_vendor = openwrt
top_build_prefix = 
top_builddir = .
top_srcdir = .
SUBDIRS = include libraries clients servers tests doc
all: all-recursive

.SUFFIXES:
am--refresh: Makefile
	@:
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      echo ' cd $(srcdir) && $(AUTOMAKE) --gnu'; \
	      $(am__cd) $(srcdir) && $(AUTOMAKE) --gnu \
		&& exit 0; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu Makefile:build/top.mk:Makefile.in:build/dir.mk'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu Makefile:build/top.mk:Makefile.in:build/dir.mk
.PRECIOUS: Makefile
Makefile: $(top_srcdir)/build/top.mk $(srcdir)/Makefile.in $(top_srcdir)/build/dir.mk $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    echo ' $(SHELL) ./config.status'; \
	    $(SHELL) ./config.status;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	$(SHELL) ./config.status --recheck

$(top_srcdir)/configure:  $(am__configure_deps)
	$(am__cd) $(srcdir) && $(AUTOCONF)
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	$(am__cd) $(srcdir) && $(ACLOCAL) $(ACLOCAL_AMFLAGS)
$(am__aclocal_m4_deps):

include/portable.h: include/stamp-h1
	@if test ! -f $@; then rm -f include/stamp-h1; else :; fi
	@if test ! -f $@; then $(MAKE) $(AM_MAKEFLAGS) include/stamp-h1; else :; fi

include/stamp-h1: $(top_srcdir)/include/portable.hin $(top_builddir)/config.status
	@rm -f include/stamp-h1
	cd $(top_builddir) && $(SHELL) ./config.status include/portable.h
$(top_srcdir)/include/portable.hin:  $(am__configure_deps) 
	($(am__cd) $(top_srcdir) && $(AUTOHEADER))
	rm -f include/stamp-h1
	touch $@

include/ldap_features.h: include/stamp-h2
	@if test ! -f $@; then rm -f include/stamp-h2; else :; fi
	@if test ! -f $@; then $(MAKE) $(AM_MAKEFLAGS) include/stamp-h2; else :; fi

include/stamp-h2: $(top_srcdir)/include/ldap_features.hin $(top_builddir)/config.status
	@rm -f include/stamp-h2
	cd $(top_builddir) && $(SHELL) ./config.status include/ldap_features.h

include/lber_types.h: include/stamp-h3
	@if test ! -f $@; then rm -f include/stamp-h3; else :; fi
	@if test ! -f $@; then $(MAKE) $(AM_MAKEFLAGS) include/stamp-h3; else :; fi

include/stamp-h3: $(top_srcdir)/include/lber_types.hin $(top_builddir)/config.status
	@rm -f include/stamp-h3
	cd $(top_builddir) && $(SHELL) ./config.status include/lber_types.h

distclean-hdr:
	-rm -f include/portable.h include/stamp-h1 include/ldap_features.h include/stamp-h2 include/lber_types.h include/stamp-h3
doc/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
doc/man/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/man/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
doc/man/man1/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/man/man1/Makefile.in $(top_srcdir)/build/man.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
doc/man/man3/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/man/man3/Makefile.in $(top_srcdir)/build/man.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
doc/man/man5/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/man/man5/Makefile.in $(top_srcdir)/build/man.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
doc/man/man8/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/doc/man/man8/Makefile.in $(top_srcdir)/build/man.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
clients/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/clients/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
clients/tools/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/clients/tools/Makefile.in $(top_srcdir)/build/rules.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
include/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/include/Makefile.in
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/liblber/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/liblber/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-shared.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/libldap/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/libldap/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-shared.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/libldap_r/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/libldap_r/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-shared.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/liblunicode/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/liblunicode/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-static.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/liblutil/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/liblutil/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-static.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
libraries/librewrite/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/libraries/librewrite/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-static.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/Makefile.in $(top_srcdir)/build/srv.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-bdb/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-bdb/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-dnssrv/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-dnssrv/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-hdb/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-hdb/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-ldap/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-ldap/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-ldif/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-ldif/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-mdb/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-mdb/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-meta/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-meta/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-monitor/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-monitor/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-ndb/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-ndb/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-null/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-null/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-passwd/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-passwd/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-perl/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-perl/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-relay/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-relay/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-shell/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-shell/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-sock/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-sock/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/back-sql/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/back-sql/Makefile.in $(top_srcdir)/build/mod.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/shell-backends/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/shell-backends/Makefile.in $(top_srcdir)/build/srv.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/slapi/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/slapi/Makefile.in $(top_srcdir)/build/lib.mk $(top_srcdir)/build/lib-shared.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
servers/slapd/overlays/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/servers/slapd/overlays/Makefile.in $(top_srcdir)/build/lib.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
tests/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/tests/Makefile.in $(top_srcdir)/build/dir.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@
tests/run: $(top_builddir)/config.status $(top_srcdir)/tests/run.in
	cd $(top_builddir) && $(SHELL) ./config.status $@
tests/progs/Makefile: $(top_builddir)/config.status $(top_srcdir)/build/top.mk $(top_srcdir)/tests/progs/Makefile.in $(top_srcdir)/build/rules.mk
	cd $(top_builddir) && $(SHELL) ./config.status $@

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:
	-rm -f libtool config.lt

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.
$(RECURSIVE_TARGETS):
	@fail= failcom='exit 1'; \
	for f in x $$MAKEFLAGS; do \
	  case $$f in \
	    *=* | --[!k]*);; \
	    *k*) failcom='fail=yes';; \
	  esac; \
	done; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	  || eval $$failcom; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

$(RECURSIVE_CLEAN_TARGETS):
	@fail= failcom='exit 1'; \
	for f in x $$MAKEFLAGS; do \
	  case $$f in \
	    *=* | --[!k]*);; \
	    *k*) failcom='fail=yes';; \
	  esac; \
	done; \
	dot_seen=no; \
	case "$@" in \
	  distclean-* | maintainer-clean-*) list='$(DIST_SUBDIRS)' ;; \
	  *) list='$(SUBDIRS)' ;; \
	esac; \
	rev=''; for subdir in $$list; do \
	  if test "$$subdir" = "."; then :; else \
	    rev="$$subdir $$rev"; \
	  fi; \
	done; \
	rev="$$rev ."; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	  || eval $$failcom; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done
ctags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) ctags); \
	done

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS: tags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	set x; \
	here=`pwd`; \
	if ($(ETAGS) --etags-include --version) >/dev/null 2>&1; then \
	  include_option=--etags-include; \
	  empty_fix=.; \
	else \
	  include_option=--include; \
	  empty_fix=; \
	fi; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  if test "$$subdir" = .; then :; else \
	    test ! -f $$subdir/TAGS || \
	      set "$$@" "$$include_option=$$here/$$subdir/TAGS"; \
	  fi; \
	done; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: CTAGS
CTAGS: ctags-recursive $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	$(am__remove_distdir)
	test -d "$(distdir)" || mkdir "$(distdir)"
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
	@list='$(DIST_SUBDIRS)'; for subdir in $$list; do \
	  if test "$$subdir" = .; then :; else \
	    $(am__make_dryrun) \
	      || test -d "$(distdir)/$$subdir" \
	      || $(MKDIR_P) "$(distdir)/$$subdir" \
	      || exit 1; \
	    dir1=$$subdir; dir2="$(distdir)/$$subdir"; \
	    $(am__relativize); \
	    new_distdir=$$reldir; \
	    dir1=$$subdir; dir2="$(top_distdir)"; \
	    $(am__relativize); \
	    new_top_distdir=$$reldir; \
	    echo " (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) top_distdir="$$new_top_distdir" distdir="$$new_distdir" \\"; \
	    echo "     am__remove_distdir=: am__skip_length_check=: am__skip_mode_fix=: distdir)"; \
	    ($(am__cd) $$subdir && \
	      $(MAKE) $(AM_MAKEFLAGS) \
	        top_distdir="$$new_top_distdir" \
	        distdir="$$new_distdir" \
		am__remove_distdir=: \
		am__skip_length_check=: \
		am__skip_mode_fix=: \
	        distdir) \
	      || exit 1; \
	  fi; \
	done
	-test -n "$(am__skip_mode_fix)" \
	|| find "$(distdir)" -type d ! -perm -755 \
		-exec chmod u+rwx,go+rx {} \; -o \
	  ! -type d ! -perm -444 -links 1 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -400 -exec chmod a+r {} \; -o \
	  ! -type d ! -perm -444 -exec $(install_sh) -c -m a+r {} {} \; \
	|| chmod -R a+r "$(distdir)"
dist-gzip: distdir
	tardir=$(distdir) && $(am__tar) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz
	$(am__remove_distdir)

dist-bzip2: distdir
	tardir=$(distdir) && $(am__tar) | BZIP2=$${BZIP2--9} bzip2 -c >$(distdir).tar.bz2
	$(am__remove_distdir)

dist-lzip: distdir
	tardir=$(distdir) && $(am__tar) | lzip -c $${LZIP_OPT--9} >$(distdir).tar.lz
	$(am__remove_distdir)

dist-lzma: distdir
	tardir=$(distdir) && $(am__tar) | lzma -9 -c >$(distdir).tar.lzma
	$(am__remove_distdir)

dist-xz: distdir
	tardir=$(distdir) && $(am__tar) | XZ_OPT=$${XZ_OPT--e} xz -c >$(distdir).tar.xz
	$(am__remove_distdir)

dist-tarZ: distdir
	tardir=$(distdir) && $(am__tar) | compress -c >$(distdir).tar.Z
	$(am__remove_distdir)

dist-shar: distdir
	shar $(distdir) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).shar.gz
	$(am__remove_distdir)

dist-zip: distdir
	-rm -f $(distdir).zip
	zip -rq $(distdir).zip $(distdir)
	$(am__remove_distdir)

dist dist-all: distdir
	tardir=$(distdir) && $(am__tar) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz
	$(am__remove_distdir)

# This target untars the dist file and tries a VPATH configuration.  Then
# it guarantees that the distribution is self-contained by making another
# tarfile.
distcheck: dist
	case '$(DIST_ARCHIVES)' in \
	*.tar.gz*) \
	  GZIP=$(GZIP_ENV) gzip -dc $(distdir).tar.gz | $(am__untar) ;;\
	*.tar.bz2*) \
	  bzip2 -dc $(distdir).tar.bz2 | $(am__untar) ;;\
	*.tar.lzma*) \
	  lzma -dc $(distdir).tar.lzma | $(am__untar) ;;\
	*.tar.lz*) \
	  lzip -dc $(distdir).tar.lz | $(am__untar) ;;\
	*.tar.xz*) \
	  xz -dc $(distdir).tar.xz | $(am__untar) ;;\
	*.tar.Z*) \
	  uncompress -c $(distdir).tar.Z | $(am__untar) ;;\
	*.shar.gz*) \
	  GZIP=$(GZIP_ENV) gzip -dc $(distdir).shar.gz | unshar ;;\
	*.zip*) \
	  unzip $(distdir).zip ;;\
	esac
	chmod -R a-w $(distdir); chmod u+w $(distdir)
	mkdir $(distdir)/_build
	mkdir $(distdir)/_inst
	chmod a-w $(distdir)
	test -d $(distdir)/_build || exit 0; \
	dc_install_base=`$(am__cd) $(distdir)/_inst && pwd | sed -e 's,^[^:\\/]:[\\/],/,'` \
	  && dc_destdir="$${TMPDIR-/tmp}/am-dc-$$$$/" \
	  && am__cwd=`pwd` \
	  && $(am__cd) $(distdir)/_build \
	  && ../configure --srcdir=.. --prefix="$$dc_install_base" \
	    $(AM_DISTCHECK_CONFIGURE_FLAGS) \
	    $(DISTCHECK_CONFIGURE_FLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) dvi \
	  && $(MAKE) $(AM_MAKEFLAGS) check \
	  && $(MAKE) $(AM_MAKEFLAGS) install \
	  && $(MAKE) $(AM_MAKEFLAGS) installcheck \
	  && $(MAKE) $(AM_MAKEFLAGS) uninstall \
	  && $(MAKE) $(AM_MAKEFLAGS) distuninstallcheck_dir="$$dc_install_base" \
	        distuninstallcheck \
	  && chmod -R a-w "$$dc_install_base" \
	  && ({ \
	       (cd ../.. && umask 077 && mkdir "$$dc_destdir") \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" install \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" uninstall \
	       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR="$$dc_destdir" \
	            distuninstallcheck_dir="$$dc_destdir" distuninstallcheck; \
	      } || { rm -rf "$$dc_destdir"; exit 1; }) \
	  && rm -rf "$$dc_destdir" \
	  && $(MAKE) $(AM_MAKEFLAGS) dist \
	  && rm -rf $(DIST_ARCHIVES) \
	  && $(MAKE) $(AM_MAKEFLAGS) distcleancheck \
	  && cd "$$am__cwd" \
	  || exit 1
	$(am__remove_distdir)
	@(echo "$(distdir) archives ready for distribution: "; \
	  list='$(DIST_ARCHIVES)'; for i in $$list; do echo $$i; done) | \
	  sed -e 1h -e 1s/./=/g -e 1p -e 1x -e '$$p' -e '$$x'
distuninstallcheck:
	@test -n '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: trying to run $@ with an empty' \
	       '$$(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	$(am__cd) '$(distuninstallcheck_dir)' || { \
	  echo 'ERROR: cannot chdir into $(distuninstallcheck_dir)' >&2; \
	  exit 1; \
	}; \
	test `$(am__distuninstallcheck_listfiles) | wc -l` -eq 0 \
	   || { echo "ERROR: files left after uninstall:" ; \
	        if test -n "$(DESTDIR)"; then \
	          echo "  (check DESTDIR support)"; \
	        fi ; \
	        $(distuninstallcheck_listfiles) ; \
	        exit 1; } >&2
distcleancheck: distclean
	@if test '$(srcdir)' = . ; then \
	  echo "ERROR: distcleancheck can only run from a VPATH build" ; \
	  exit 1 ; \
	fi
	@test `$(distcleancheck_listfiles) | wc -l` -eq 0 \
	  || { echo "ERROR: files left in build directory after distclean:" ; \
	       $(distcleancheck_listfiles) ; \
	       exit 1; } >&2
check-am: all-am
check: check-recursive
all-am: Makefile
installdirs: installdirs-recursive
installdirs-am:
install: install-recursive
install-exec: install-exec-recursive
install-data: install-data-recursive
uninstall: uninstall-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-recursive
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-recursive

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-recursive
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
	-rm -f Makefile
distclean-am: clean-am distclean-generic distclean-hdr \
	distclean-libtool distclean-tags

dvi: dvi-recursive

dvi-am:

html: html-recursive

html-am:

info: info-recursive

info-am:

install-data-am:

install-dvi: install-dvi-recursive

install-dvi-am:

install-exec-am:

install-html: install-html-recursive

install-html-am:

install-info: install-info-recursive

install-info-am:

install-man:

install-pdf: install-pdf-recursive

install-pdf-am:

install-ps: install-ps-recursive

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-recursive
	-rm -f $(am__CONFIG_DISTCLEAN_FILES)
	-rm -rf $(top_srcdir)/autom4te.cache
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-recursive

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-recursive

pdf-am:

ps: ps-recursive

ps-am:

uninstall-am:

.MAKE: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) ctags-recursive \
	install-am install-strip tags-recursive

.PHONY: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) CTAGS GTAGS \
	all all-am am--refresh check check-am clean clean-generic \
	clean-libtool ctags ctags-recursive dist dist-all dist-bzip2 \
	dist-gzip dist-lzip dist-lzma dist-shar dist-tarZ dist-xz \
	dist-zip distcheck distclean distclean-generic distclean-hdr \
	distclean-libtool distclean-tags distcleancheck distdir \
	distuninstallcheck dvi dvi-am html html-am info info-am \
	install install-am install-data install-data-am install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-ps install-ps-am \
	install-strip installcheck installcheck-am installdirs \
	installdirs-am maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-generic mostlyclean-libtool pdf pdf-am \
	ps ps-am tags tags-recursive uninstall uninstall-am


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
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
# Makes subdirectories
#


all-common: FORCE
	@echo "Making all in `$(PWD)`"
	@for i in $(SUBDIRS) $(ALLDIRS); do 		\
		echo "  Entering subdirectory $$i";		\
		( cd $$i; $(MAKE) $(MFLAGS) all );		\
		if test $$? != 0 ; then exit 1; fi ;	\
		echo " ";								\
	done

install-common: FORCE
	@echo "Making install in `$(PWD)`"
	@for i in $(SUBDIRS) $(INSTALLDIRS); do 	\
		echo "  Entering subdirectory $$i";		\
		( cd $$i; $(MAKE) $(MFLAGS) install );	\
		if test $$? != 0 ; then exit 1; fi ;	\
		echo " ";								\
	done

clean-common: FORCE
	@echo "Making clean in `$(PWD)`"
	@for i in $(SUBDIRS) $(CLEANDIRS); do		\
		echo "  Entering subdirectory $$i";		\
		( cd $$i; $(MAKE) $(MFLAGS) clean );	\
		if test $$? != 0 ; then exit 1; fi ;	\
		echo " ";								\
	done

veryclean-common: FORCE
	@echo "Making veryclean in `$(PWD)`"
	@for i in $(SUBDIRS) $(CLEANDIRS); do		\
		echo "  Entering subdirectory $$i";		\
		( cd $$i; $(MAKE) $(MFLAGS) veryclean );	\
		if test $$? != 0 ; then exit 1; fi ;	\
		echo " ";								\
	done

depend-common: FORCE
	@echo "Making depend in `$(PWD)`"
	@for i in $(SUBDIRS) $(DEPENDDIRS); do		\
		echo "  Entering subdirectory $$i";		\
		( cd $$i; $(MAKE) $(MFLAGS) depend );	\
		if test $$? != 0 ; then exit 1; fi ;	\
		echo " ";								\
	done

Makefile: $(top_srcdir)/build/dir.mk
