cmake_minimum_required(VERSION 3.12)

# set the project name
project(Vector VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(Vector 
src/main.cpp
src/domain/model/Employee.h
src/domain/model/Employee.cpp
src/helpers/Utils.h
src/helpers/Utils.cpp
src/infrastructure/ports/EmployeeFile.h
src/infrastructure/ports/EmployeeFile.cpp
)



configure_file(src/main.h.in src/main.h)

target_include_directories(Vector PUBLIC 
"${PROJECT_BINARY_DIR}"
src)

# Optionally, if you want to separate the Employee.h and Utils.h directories
# into separate include directories:
target_include_directories(Vector PUBLIC 
"${PROJECT_BINARY_DIR}" src/domain/model)
target_include_directories(Vector PUBLIC 
"${PROJECT_BINARY_DIR}" src/helpers)


