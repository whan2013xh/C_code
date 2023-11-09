cmake_minimum_required(VERSION 3.26)
project(C_code)

set(CMAKE_CXX_STANDARD 14)

add_executable(C_code
        src/structs/struct_range.cpp
        src/structs/struct_sort.cpp
        src/numberBook/numberManager.cpp
        src/mermory/globalMerrory.cpp
        src/mermory/stackMerror.cpp
        src/mermory/heapMerroy.cpp
        src/quote/functionQuote.cpp
        src/quote/constQuote.cpp
        src/classStudy/circle.cpp
        src/classStudy/ConstructFunc.cpp
        src/classStudy/copyConstruct.cpp
        src/classStudy/constructOrder.cpp)
