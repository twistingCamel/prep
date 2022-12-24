# cmake_minimum_required(VERSION 3.0.0)
# project(ant VERSION 0.1.0)

# include(CTest)
# enable_testing()

# target_include_directories(prep )

cmake_policy(SET CMP0079 NEW)
cmake_policy(SET CMP0076 NEW)

target_include_directories(prep PUBLIC /usr/include/antlr4-runtime)

set(CMAKE_CXX_STANDARD 20)

target_precompile_headers(prep
    PUBLIC
    prepBaseListener.h
    prepBaseVisitor.h
    prepLexer.h
    prepListener.h
    prepParser.h
    prepVisitor.h
)

target_sources(prep 
    # PUBLIC
    # prepBaseListener.h
    # prepBaseVisitor.h
    # prepLexer.h
    # prepListener.h
    # prepParser.h
    # prepVisitor.h
    PRIVATE
    prepLexer.interp
    prepLexer.tokens
    prepBaseListener.cpp
    prepBaseVisitor.cpp
    prepLexer.cpp
    prepListener.cpp
    prepParser.cpp
    prepVisitor.cpp
)

target_link_libraries(prep antlr4-runtime)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)