# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/talos/proyectos/esp8266-aws-iot-freertos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/talos/proyectos/esp8266-aws-iot-freertos

# Include any dependencies generated for this target.
include esp-idf/console/CMakeFiles/__idf_console.dir/depend.make

# Include the progress variables for this target.
include esp-idf/console/CMakeFiles/__idf_console.dir/progress.make

# Include the compile flags for this target's objects.
include esp-idf/console/CMakeFiles/__idf_console.dir/flags.make

esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.o: esp-idf/console/CMakeFiles/__idf_console.dir/flags.make
esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.o: /home/talos/esp/ESP8266_RTOS_SDK/components/console/commands.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_console.dir/commands.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/components/console/commands.c

esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_console.dir/commands.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/components/console/commands.c > CMakeFiles/__idf_console.dir/commands.c.i

esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_console.dir/commands.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/components/console/commands.c -o CMakeFiles/__idf_console.dir/commands.c.s

esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.o: esp-idf/console/CMakeFiles/__idf_console.dir/flags.make
esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.o: /home/talos/esp/ESP8266_RTOS_SDK/components/console/split_argv.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_console.dir/split_argv.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/components/console/split_argv.c

esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_console.dir/split_argv.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/components/console/split_argv.c > CMakeFiles/__idf_console.dir/split_argv.c.i

esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_console.dir/split_argv.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/components/console/split_argv.c -o CMakeFiles/__idf_console.dir/split_argv.c.s

esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o: esp-idf/console/CMakeFiles/__idf_console.dir/flags.make
esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o: /home/talos/esp/ESP8266_RTOS_SDK/components/console/argtable3/argtable3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/components/console/argtable3/argtable3.c

esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_console.dir/argtable3/argtable3.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/components/console/argtable3/argtable3.c > CMakeFiles/__idf_console.dir/argtable3/argtable3.c.i

esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_console.dir/argtable3/argtable3.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/components/console/argtable3/argtable3.c -o CMakeFiles/__idf_console.dir/argtable3/argtable3.c.s

esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o: esp-idf/console/CMakeFiles/__idf_console.dir/flags.make
esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o: /home/talos/esp/ESP8266_RTOS_SDK/components/console/linenoise/linenoise.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/components/console/linenoise/linenoise.c

esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_console.dir/linenoise/linenoise.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/components/console/linenoise/linenoise.c > CMakeFiles/__idf_console.dir/linenoise/linenoise.c.i

esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_console.dir/linenoise/linenoise.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/components/console/linenoise/linenoise.c -o CMakeFiles/__idf_console.dir/linenoise/linenoise.c.s

# Object files for target __idf_console
__idf_console_OBJECTS = \
"CMakeFiles/__idf_console.dir/commands.c.o" \
"CMakeFiles/__idf_console.dir/split_argv.c.o" \
"CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o" \
"CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o"

# External object files for target __idf_console
__idf_console_EXTERNAL_OBJECTS =

esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/commands.c.o
esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/split_argv.c.o
esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/argtable3/argtable3.c.o
esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/linenoise/linenoise.c.o
esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/build.make
esp-idf/console/libconsole.a: esp-idf/console/CMakeFiles/__idf_console.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libconsole.a"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && $(CMAKE_COMMAND) -P CMakeFiles/__idf_console.dir/cmake_clean_target.cmake
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/__idf_console.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
esp-idf/console/CMakeFiles/__idf_console.dir/build: esp-idf/console/libconsole.a

.PHONY : esp-idf/console/CMakeFiles/__idf_console.dir/build

esp-idf/console/CMakeFiles/__idf_console.dir/clean:
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console && $(CMAKE_COMMAND) -P CMakeFiles/__idf_console.dir/cmake_clean.cmake
.PHONY : esp-idf/console/CMakeFiles/__idf_console.dir/clean

esp-idf/console/CMakeFiles/__idf_console.dir/depend:
	cd /home/talos/proyectos/esp8266-aws-iot-freertos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/talos/proyectos/esp8266-aws-iot-freertos /home/talos/esp/ESP8266_RTOS_SDK/components/console /home/talos/proyectos/esp8266-aws-iot-freertos /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/console/CMakeFiles/__idf_console.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : esp-idf/console/CMakeFiles/__idf_console.dir/depend

