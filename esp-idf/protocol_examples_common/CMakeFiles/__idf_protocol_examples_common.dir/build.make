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
include esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/depend.make

# Include the progress variables for this target.
include esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/progress.make

# Include the compile flags for this target's objects.
include esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/flags.make

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/flags.make
esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o: /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/connect.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/connect.c

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_protocol_examples_common.dir/connect.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/connect.c > CMakeFiles/__idf_protocol_examples_common.dir/connect.c.i

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_protocol_examples_common.dir/connect.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/connect.c -o CMakeFiles/__idf_protocol_examples_common.dir/connect.c.s

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/flags.make
esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o: /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/stdin_out.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o   -c /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/stdin_out.c

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.i"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/stdin_out.c > CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.i

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.s"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common/stdin_out.c -o CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.s

# Object files for target __idf_protocol_examples_common
__idf_protocol_examples_common_OBJECTS = \
"CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o" \
"CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o"

# External object files for target __idf_protocol_examples_common
__idf_protocol_examples_common_EXTERNAL_OBJECTS =

esp-idf/protocol_examples_common/libprotocol_examples_common.a: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/connect.c.o
esp-idf/protocol_examples_common/libprotocol_examples_common.a: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/stdin_out.c.o
esp-idf/protocol_examples_common/libprotocol_examples_common.a: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/build.make
esp-idf/protocol_examples_common/libprotocol_examples_common.a: esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/talos/proyectos/esp8266-aws-iot-freertos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libprotocol_examples_common.a"
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && $(CMAKE_COMMAND) -P CMakeFiles/__idf_protocol_examples_common.dir/cmake_clean_target.cmake
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/__idf_protocol_examples_common.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/build: esp-idf/protocol_examples_common/libprotocol_examples_common.a

.PHONY : esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/build

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/clean:
	cd /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common && $(CMAKE_COMMAND) -P CMakeFiles/__idf_protocol_examples_common.dir/cmake_clean.cmake
.PHONY : esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/clean

esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/depend:
	cd /home/talos/proyectos/esp8266-aws-iot-freertos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/talos/proyectos/esp8266-aws-iot-freertos /home/talos/esp/ESP8266_RTOS_SDK/examples/common_components/protocol_examples_common /home/talos/proyectos/esp8266-aws-iot-freertos /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common /home/talos/proyectos/esp8266-aws-iot-freertos/esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : esp-idf/protocol_examples_common/CMakeFiles/__idf_protocol_examples_common.dir/depend

