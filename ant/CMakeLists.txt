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