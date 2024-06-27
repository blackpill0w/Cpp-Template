cmake_minimum_required(VERSION 3.14)
project(app CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
string(CONCAT CMAKE_CXX_FLAGS
  "${CMAKE_CXX_FLAGS}"
  " -static -Wall -Wextra"
  " -Wfloat-conversion -Wsign-conversion"
  " -Wshadow -Wduplicated-cond"
  " -Wduplicated-branches -Wlogical-op"
  " -Wnull-dereference -Wuseless-cast"
  " -Wformat=2 -Wformat-security")

set(BUILD_SHARED_LIBS OFF)
set(BUILD_TESTING OFF)

# JsonCpp
set(JSONCPP_WITH_POST_BUILD_UNITTEST OFF)
set(JSONCPP_WITH_POST_BUILD_UNITTEST OFF)
set(JSONCPP_WITH_TESTS OFF)

add_executable(app
  src/main.cpp)
target_link_libraries(app
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
