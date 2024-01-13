cmake_minimum_required(VERSION 3.19)
project(2_3)

set(CMAKE_CXX_STANDARD 14)

include_directories("doubly linked list")

add_executable(2_3
        Chain-Queue/main.cpp
        "doubly linked list/hip.h"
        "doubly linked list/main.cpp"
        "doubly linked list/static linked list.cpp"
        "Dynamic allocation of linear tables(C++)/main.cpp"
        "Dynamic(practice)/main.cpp"
        Elemtype/main.c
        Initialization/main.c
        "Initialization Sequence Table/main.cpp"
        LinearList/main.c
        "Linked List/main.cpp"
        "parenthesis matching/main.cpp"
        Quene/main.cpp
        "Single linked list/main.cpp"
        "Single Linked List(test)/main.cpp"
        "Single Linker List(Test1)/main.cpp"
        "Singly linked list creation/main.cpp"
        Stack/main.cpp
        "Static linear table/main.cpp"
        "test(&)/main.c"
        uChain-Queue/main.cpp
        uChain-stack/main.cpp)
