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
CMAKE_SOURCE_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1

# Include any dependencies generated for this target.
include CMakeFiles/uci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uci.dir/flags.make

CMakeFiles/uci.dir/libuci.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/libuci.c.o: libuci.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/libuci.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/libuci.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/libuci.c

CMakeFiles/uci.dir/libuci.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/libuci.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/libuci.c > CMakeFiles/uci.dir/libuci.c.i

CMakeFiles/uci.dir/libuci.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/libuci.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/libuci.c -o CMakeFiles/uci.dir/libuci.c.s

CMakeFiles/uci.dir/libuci.c.o.requires:
.PHONY : CMakeFiles/uci.dir/libuci.c.o.requires

CMakeFiles/uci.dir/libuci.c.o.provides: CMakeFiles/uci.dir/libuci.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/libuci.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/libuci.c.o.provides

CMakeFiles/uci.dir/libuci.c.o.provides.build: CMakeFiles/uci.dir/libuci.c.o

CMakeFiles/uci.dir/file.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/file.c.o: file.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/file.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/file.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/file.c

CMakeFiles/uci.dir/file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/file.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/file.c > CMakeFiles/uci.dir/file.c.i

CMakeFiles/uci.dir/file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/file.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/file.c -o CMakeFiles/uci.dir/file.c.s

CMakeFiles/uci.dir/file.c.o.requires:
.PHONY : CMakeFiles/uci.dir/file.c.o.requires

CMakeFiles/uci.dir/file.c.o.provides: CMakeFiles/uci.dir/file.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/file.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/file.c.o.provides

CMakeFiles/uci.dir/file.c.o.provides.build: CMakeFiles/uci.dir/file.c.o

CMakeFiles/uci.dir/util.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/util.c.o: util.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/util.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/util.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/util.c

CMakeFiles/uci.dir/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/util.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/util.c > CMakeFiles/uci.dir/util.c.i

CMakeFiles/uci.dir/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/util.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/util.c -o CMakeFiles/uci.dir/util.c.s

CMakeFiles/uci.dir/util.c.o.requires:
.PHONY : CMakeFiles/uci.dir/util.c.o.requires

CMakeFiles/uci.dir/util.c.o.provides: CMakeFiles/uci.dir/util.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/util.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/util.c.o.provides

CMakeFiles/uci.dir/util.c.o.provides.build: CMakeFiles/uci.dir/util.c.o

CMakeFiles/uci.dir/delta.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/delta.c.o: delta.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/delta.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/delta.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/delta.c

CMakeFiles/uci.dir/delta.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/delta.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/delta.c > CMakeFiles/uci.dir/delta.c.i

CMakeFiles/uci.dir/delta.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/delta.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/delta.c -o CMakeFiles/uci.dir/delta.c.s

CMakeFiles/uci.dir/delta.c.o.requires:
.PHONY : CMakeFiles/uci.dir/delta.c.o.requires

CMakeFiles/uci.dir/delta.c.o.provides: CMakeFiles/uci.dir/delta.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/delta.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/delta.c.o.provides

CMakeFiles/uci.dir/delta.c.o.provides.build: CMakeFiles/uci.dir/delta.c.o

CMakeFiles/uci.dir/parse.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/parse.c.o: parse.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/parse.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/parse.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/parse.c

CMakeFiles/uci.dir/parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/parse.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/parse.c > CMakeFiles/uci.dir/parse.c.i

CMakeFiles/uci.dir/parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/parse.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/parse.c -o CMakeFiles/uci.dir/parse.c.s

CMakeFiles/uci.dir/parse.c.o.requires:
.PHONY : CMakeFiles/uci.dir/parse.c.o.requires

CMakeFiles/uci.dir/parse.c.o.provides: CMakeFiles/uci.dir/parse.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/parse.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/parse.c.o.provides

CMakeFiles/uci.dir/parse.c.o.provides.build: CMakeFiles/uci.dir/parse.c.o

CMakeFiles/uci.dir/blob.c.o: CMakeFiles/uci.dir/flags.make
CMakeFiles/uci.dir/blob.c.o: blob.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/uci.dir/blob.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/uci.dir/blob.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/blob.c

CMakeFiles/uci.dir/blob.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/uci.dir/blob.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/blob.c > CMakeFiles/uci.dir/blob.c.i

CMakeFiles/uci.dir/blob.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/uci.dir/blob.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/blob.c -o CMakeFiles/uci.dir/blob.c.s

CMakeFiles/uci.dir/blob.c.o.requires:
.PHONY : CMakeFiles/uci.dir/blob.c.o.requires

CMakeFiles/uci.dir/blob.c.o.provides: CMakeFiles/uci.dir/blob.c.o.requires
	$(MAKE) -f CMakeFiles/uci.dir/build.make CMakeFiles/uci.dir/blob.c.o.provides.build
.PHONY : CMakeFiles/uci.dir/blob.c.o.provides

CMakeFiles/uci.dir/blob.c.o.provides.build: CMakeFiles/uci.dir/blob.c.o

# Object files for target uci
uci_OBJECTS = \
"CMakeFiles/uci.dir/libuci.c.o" \
"CMakeFiles/uci.dir/file.c.o" \
"CMakeFiles/uci.dir/util.c.o" \
"CMakeFiles/uci.dir/delta.c.o" \
"CMakeFiles/uci.dir/parse.c.o" \
"CMakeFiles/uci.dir/blob.c.o"

# External object files for target uci
uci_EXTERNAL_OBJECTS =

libuci.so: CMakeFiles/uci.dir/libuci.c.o
libuci.so: CMakeFiles/uci.dir/file.c.o
libuci.so: CMakeFiles/uci.dir/util.c.o
libuci.so: CMakeFiles/uci.dir/delta.c.o
libuci.so: CMakeFiles/uci.dir/parse.c.o
libuci.so: CMakeFiles/uci.dir/blob.c.o
libuci.so: CMakeFiles/uci.dir/build.make
libuci.so: CMakeFiles/uci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C shared library libuci.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uci.dir/build: libuci.so
.PHONY : CMakeFiles/uci.dir/build

CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/libuci.c.o.requires
CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/file.c.o.requires
CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/util.c.o.requires
CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/delta.c.o.requires
CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/parse.c.o.requires
CMakeFiles/uci.dir/requires: CMakeFiles/uci.dir/blob.c.o.requires
.PHONY : CMakeFiles/uci.dir/requires

CMakeFiles/uci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uci.dir/clean

CMakeFiles/uci.dir/depend:
	cd /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/uci-2014-04-11.1/CMakeFiles/uci.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uci.dir/depend

