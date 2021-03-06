cmake_minimum_required(VERSION 2.6)

# Project name
project(roulette-simulation)

# Paths
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Include directories
include_directories("${PROJECT_SOURCE_DIR}")

# Find all source files
file(GLOB files ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Dependencies
find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic-errors -O3")

# Executable
add_executable(${PROJECT_NAME} ${files})

# Link
target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})

if (WIN32)
	# Static link for Windows
	set(CMAKE_EXE_LINKER_FLAGS "-static")
endif (WIN32)