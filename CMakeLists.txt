cmake_minimum_required(VERSION 3.14)
project(app CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wfloat-conversion -Wsign-conversion -Wshadow")

#fmt
find_package(fmt)
if (NOT fmt_FOUND)
   include(FetchContent)
   FetchContent_Declare(
      fmt
      GIT_REPOSITORY https://github.com/fmtlib/fmt.git
      GIT_TAG master
   )
   FetchContent_MakeAvailable(fmt)
endif()

# raylib
find_package(raylib)
if (NOT raylib_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 4.2.0
    )
    FetchContent_MakeAvailable(raylib)
endif()

# SFML
find_package(SFML COMPONENTS window graphics)
if (NOT SFML_FOUND)
   include(FetchContent)
   FetchContent_Declare(
      SFML
      GIT_REPOSITORY https://github.com/SFML/SFML.git
      GIT_TAG 2.5.1
   )
   FetchContent_MakeAvailable(SFML)
endif()

add_executable(app
   src/main.cpp)
target_link_libraries(app
   sfml-window sfml-graphics OpenGL
   raylib
   fmt
)
