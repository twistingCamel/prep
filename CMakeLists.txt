cmake_minimum_required(VERSION 3.0.0)
project(prep VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)

set(COMPILE_FLAGS "-Wall -Wextra")

find_package(Boost COMPONENTS system filesystem REQUIRED)

add_executable(prep main.cpp PrepVisitor.cpp PrepGenerator.cpp utils.cpp
                    prep.cpp)

target_precompile_headers(prep PUBLIC PrepVisitor.hpp PrepGenerator.hpp
                          utils.hpp prep.hpp)

target_link_libraries(prep fmt Boost::filesystem)

add_subdirectory(ant)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
