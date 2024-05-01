cmake_minimum_required(VERSION 3.12)

# set the project name
project(Template VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(Template src/main.cpp)

configure_file(src/main.h.in src/main.h)

target_include_directories(Template PUBLIC 
"${PROJECT_BINARY_DIR}"
src)

if ( CMAKE_COMPILER_IS_GNUCC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra")
endif()
if ( MSVC )
    set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4")
endif()