cmake_minimum_required(VERSION 3.14)
project(opengl CXX)

set(CMAKE_CXX_STANDARD 17)
find_package(SFML COMPONENTS window graphics)

include(CMakePrintHelpers)
if (NOT SFML_FOUND)
   include(FetchContent)
   FetchContent_Declare(
      SFML
      GIT_REPOSITORY https://github.com/SFML/SFML.git
      GIT_TAG 2.5.1
   )
   FetchContent_MakeAvailable(SFML)
endif()

add_executable(opengl
   src/main.cpp)
target_link_libraries(opengl sfml-window sfml-graphics OpenGL)
