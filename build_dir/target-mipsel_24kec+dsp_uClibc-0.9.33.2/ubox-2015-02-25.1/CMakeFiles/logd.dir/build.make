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
CMAKE_SOURCE_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1

# Include any dependencies generated for this target.
include CMakeFiles/logd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/logd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/logd.dir/flags.make

CMakeFiles/logd.dir/log/logd.c.o: CMakeFiles/logd.dir/flags.make
CMakeFiles/logd.dir/log/logd.c.o: log/logd.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/logd.dir/log/logd.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/logd.dir/log/logd.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/logd.c

CMakeFiles/logd.dir/log/logd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logd.dir/log/logd.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/logd.c > CMakeFiles/logd.dir/log/logd.c.i

CMakeFiles/logd.dir/log/logd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logd.dir/log/logd.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/logd.c -o CMakeFiles/logd.dir/log/logd.c.s

CMakeFiles/logd.dir/log/logd.c.o.requires:
.PHONY : CMakeFiles/logd.dir/log/logd.c.o.requires

CMakeFiles/logd.dir/log/logd.c.o.provides: CMakeFiles/logd.dir/log/logd.c.o.requires
	$(MAKE) -f CMakeFiles/logd.dir/build.make CMakeFiles/logd.dir/log/logd.c.o.provides.build
.PHONY : CMakeFiles/logd.dir/log/logd.c.o.provides

CMakeFiles/logd.dir/log/logd.c.o.provides.build: CMakeFiles/logd.dir/log/logd.c.o

CMakeFiles/logd.dir/log/syslog.c.o: CMakeFiles/logd.dir/flags.make
CMakeFiles/logd.dir/log/syslog.c.o: log/syslog.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/logd.dir/log/syslog.c.o"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/logd.dir/log/syslog.c.o   -c /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/syslog.c

CMakeFiles/logd.dir/log/syslog.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logd.dir/log/syslog.c.i"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -E /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/syslog.c > CMakeFiles/logd.dir/log/syslog.c.i

CMakeFiles/logd.dir/log/syslog.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logd.dir/log/syslog.c.s"
	/home/ubuntu/openwrt-sdk/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/bin/mipsel-openwrt-linux-uclibc-gcc  $(C_DEFINES) $(C_FLAGS) -S /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/log/syslog.c -o CMakeFiles/logd.dir/log/syslog.c.s

CMakeFiles/logd.dir/log/syslog.c.o.requires:
.PHONY : CMakeFiles/logd.dir/log/syslog.c.o.requires

CMakeFiles/logd.dir/log/syslog.c.o.provides: CMakeFiles/logd.dir/log/syslog.c.o.requires
	$(MAKE) -f CMakeFiles/logd.dir/build.make CMakeFiles/logd.dir/log/syslog.c.o.provides.build
.PHONY : CMakeFiles/logd.dir/log/syslog.c.o.provides

CMakeFiles/logd.dir/log/syslog.c.o.provides.build: CMakeFiles/logd.dir/log/syslog.c.o

# Object files for target logd
logd_OBJECTS = \
"CMakeFiles/logd.dir/log/logd.c.o" \
"CMakeFiles/logd.dir/log/syslog.c.o"

# External object files for target logd
logd_EXTERNAL_OBJECTS =

logd: CMakeFiles/logd.dir/log/logd.c.o
logd: CMakeFiles/logd.dir/log/syslog.c.o
logd: CMakeFiles/logd.dir/build.make
logd: CMakeFiles/logd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable logd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/logd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/logd.dir/build: logd
.PHONY : CMakeFiles/logd.dir/build

CMakeFiles/logd.dir/requires: CMakeFiles/logd.dir/log/logd.c.o.requires
CMakeFiles/logd.dir/requires: CMakeFiles/logd.dir/log/syslog.c.o.requires
.PHONY : CMakeFiles/logd.dir/requires

CMakeFiles/logd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/logd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/logd.dir/clean

CMakeFiles/logd.dir/depend:
	cd /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1 /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/ubox-2015-02-25.1/CMakeFiles/logd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/logd.dir/depend

