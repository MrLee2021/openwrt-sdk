# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/cmake

# The command to remove a file.
RM = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /home/ubuntu/openwrt-sdk/staging_dir/host/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19

# Include any dependencies generated for this target.
include CMakeFiles/jsonpath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jsonpath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jsonpath.dir/flags.make

parser.c: parser.y
parser.c: contrib/lemon
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating parser.c"
	./contrib/lemon parser.y

contrib/lemon: contrib/lemon
contrib/lemon: contrib/lempar.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating lemon parser generator"
	gcc -o contrib/lemon contrib/lemon.c

CMakeFiles/jsonpath.dir/main.c.o: CMakeFiles/jsonpath.dir/flags.make
CMakeFiles/jsonpath.dir/main.c.o: main.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jsonpath.dir/main.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jsonpath.dir/main.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/main.c

CMakeFiles/jsonpath.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonpath.dir/main.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/main.c > CMakeFiles/jsonpath.dir/main.c.i

CMakeFiles/jsonpath.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonpath.dir/main.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/main.c -o CMakeFiles/jsonpath.dir/main.c.s

CMakeFiles/jsonpath.dir/main.c.o.requires:
.PHONY : CMakeFiles/jsonpath.dir/main.c.o.requires

CMakeFiles/jsonpath.dir/main.c.o.provides: CMakeFiles/jsonpath.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/jsonpath.dir/build.make CMakeFiles/jsonpath.dir/main.c.o.provides.build
.PHONY : CMakeFiles/jsonpath.dir/main.c.o.provides

CMakeFiles/jsonpath.dir/main.c.o.provides.build: CMakeFiles/jsonpath.dir/main.c.o

CMakeFiles/jsonpath.dir/ast.c.o: CMakeFiles/jsonpath.dir/flags.make
CMakeFiles/jsonpath.dir/ast.c.o: ast.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jsonpath.dir/ast.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jsonpath.dir/ast.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/ast.c

CMakeFiles/jsonpath.dir/ast.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonpath.dir/ast.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/ast.c > CMakeFiles/jsonpath.dir/ast.c.i

CMakeFiles/jsonpath.dir/ast.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonpath.dir/ast.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/ast.c -o CMakeFiles/jsonpath.dir/ast.c.s

CMakeFiles/jsonpath.dir/ast.c.o.requires:
.PHONY : CMakeFiles/jsonpath.dir/ast.c.o.requires

CMakeFiles/jsonpath.dir/ast.c.o.provides: CMakeFiles/jsonpath.dir/ast.c.o.requires
	$(MAKE) -f CMakeFiles/jsonpath.dir/build.make CMakeFiles/jsonpath.dir/ast.c.o.provides.build
.PHONY : CMakeFiles/jsonpath.dir/ast.c.o.provides

CMakeFiles/jsonpath.dir/ast.c.o.provides.build: CMakeFiles/jsonpath.dir/ast.c.o

CMakeFiles/jsonpath.dir/lexer.c.o: CMakeFiles/jsonpath.dir/flags.make
CMakeFiles/jsonpath.dir/lexer.c.o: lexer.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jsonpath.dir/lexer.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jsonpath.dir/lexer.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/lexer.c

CMakeFiles/jsonpath.dir/lexer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonpath.dir/lexer.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/lexer.c > CMakeFiles/jsonpath.dir/lexer.c.i

CMakeFiles/jsonpath.dir/lexer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonpath.dir/lexer.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/lexer.c -o CMakeFiles/jsonpath.dir/lexer.c.s

CMakeFiles/jsonpath.dir/lexer.c.o.requires:
.PHONY : CMakeFiles/jsonpath.dir/lexer.c.o.requires

CMakeFiles/jsonpath.dir/lexer.c.o.provides: CMakeFiles/jsonpath.dir/lexer.c.o.requires
	$(MAKE) -f CMakeFiles/jsonpath.dir/build.make CMakeFiles/jsonpath.dir/lexer.c.o.provides.build
.PHONY : CMakeFiles/jsonpath.dir/lexer.c.o.provides

CMakeFiles/jsonpath.dir/lexer.c.o.provides.build: CMakeFiles/jsonpath.dir/lexer.c.o

CMakeFiles/jsonpath.dir/parser.c.o: CMakeFiles/jsonpath.dir/flags.make
CMakeFiles/jsonpath.dir/parser.c.o: parser.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jsonpath.dir/parser.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jsonpath.dir/parser.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/parser.c

CMakeFiles/jsonpath.dir/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonpath.dir/parser.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/parser.c > CMakeFiles/jsonpath.dir/parser.c.i

CMakeFiles/jsonpath.dir/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonpath.dir/parser.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/parser.c -o CMakeFiles/jsonpath.dir/parser.c.s

CMakeFiles/jsonpath.dir/parser.c.o.requires:
.PHONY : CMakeFiles/jsonpath.dir/parser.c.o.requires

CMakeFiles/jsonpath.dir/parser.c.o.provides: CMakeFiles/jsonpath.dir/parser.c.o.requires
	$(MAKE) -f CMakeFiles/jsonpath.dir/build.make CMakeFiles/jsonpath.dir/parser.c.o.provides.build
.PHONY : CMakeFiles/jsonpath.dir/parser.c.o.provides

CMakeFiles/jsonpath.dir/parser.c.o.provides.build: CMakeFiles/jsonpath.dir/parser.c.o

CMakeFiles/jsonpath.dir/matcher.c.o: CMakeFiles/jsonpath.dir/flags.make
CMakeFiles/jsonpath.dir/matcher.c.o: matcher.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/jsonpath.dir/matcher.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/jsonpath.dir/matcher.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/matcher.c

CMakeFiles/jsonpath.dir/matcher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/jsonpath.dir/matcher.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/matcher.c > CMakeFiles/jsonpath.dir/matcher.c.i

CMakeFiles/jsonpath.dir/matcher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/jsonpath.dir/matcher.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/matcher.c -o CMakeFiles/jsonpath.dir/matcher.c.s

CMakeFiles/jsonpath.dir/matcher.c.o.requires:
.PHONY : CMakeFiles/jsonpath.dir/matcher.c.o.requires

CMakeFiles/jsonpath.dir/matcher.c.o.provides: CMakeFiles/jsonpath.dir/matcher.c.o.requires
	$(MAKE) -f CMakeFiles/jsonpath.dir/build.make CMakeFiles/jsonpath.dir/matcher.c.o.provides.build
.PHONY : CMakeFiles/jsonpath.dir/matcher.c.o.provides

CMakeFiles/jsonpath.dir/matcher.c.o.provides.build: CMakeFiles/jsonpath.dir/matcher.c.o

# Object files for target jsonpath
jsonpath_OBJECTS = \
"CMakeFiles/jsonpath.dir/main.c.o" \
"CMakeFiles/jsonpath.dir/ast.c.o" \
"CMakeFiles/jsonpath.dir/lexer.c.o" \
"CMakeFiles/jsonpath.dir/parser.c.o" \
"CMakeFiles/jsonpath.dir/matcher.c.o"

# External object files for target jsonpath
jsonpath_EXTERNAL_OBJECTS =

jsonpath: CMakeFiles/jsonpath.dir/main.c.o
jsonpath: CMakeFiles/jsonpath.dir/ast.c.o
jsonpath: CMakeFiles/jsonpath.dir/lexer.c.o
jsonpath: CMakeFiles/jsonpath.dir/parser.c.o
jsonpath: CMakeFiles/jsonpath.dir/matcher.c.o
jsonpath: CMakeFiles/jsonpath.dir/build.make
jsonpath: /home/ubuntu/openwrt-sdk/staging_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/usr/lib/libjson-c.so
jsonpath: CMakeFiles/jsonpath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable jsonpath"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jsonpath.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jsonpath.dir/build: jsonpath
.PHONY : CMakeFiles/jsonpath.dir/build

CMakeFiles/jsonpath.dir/requires: CMakeFiles/jsonpath.dir/main.c.o.requires
CMakeFiles/jsonpath.dir/requires: CMakeFiles/jsonpath.dir/ast.c.o.requires
CMakeFiles/jsonpath.dir/requires: CMakeFiles/jsonpath.dir/lexer.c.o.requires
CMakeFiles/jsonpath.dir/requires: CMakeFiles/jsonpath.dir/parser.c.o.requires
CMakeFiles/jsonpath.dir/requires: CMakeFiles/jsonpath.dir/matcher.c.o.requires
.PHONY : CMakeFiles/jsonpath.dir/requires

CMakeFiles/jsonpath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jsonpath.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jsonpath.dir/clean

CMakeFiles/jsonpath.dir/depend: parser.c
CMakeFiles/jsonpath.dir/depend: contrib/lemon
	cd /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/jsonfilter-2014-06-19/CMakeFiles/jsonpath.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jsonpath.dir/depend

