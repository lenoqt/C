cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(SDL_Basic)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL_Basic main.cpp ${SRC_FILES})
target_link_libraries(SDL_Basic ${SDL2_LIBRARIES})
target_include_directories(SDL_Basic PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
