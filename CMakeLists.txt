cmake_minimum_required(VERSION 3.19)
project(advancecode)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(2_3)
include_directories("2_3/doubly linked list")
include_directories(4)
include_directories(5)
include_directories(6)

add_executable(advancecode
        .idea/.gitignore
        .idea/advancecode.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        2_3/.idea/.gitignore
        2_3/.idea/2_3.iml
        2_3/.idea/misc.xml
        2_3/.idea/modules.xml
        2_3/.idea/vcs.xml
        2_3/.idea/workspace.xml
        2_3/Chain-Queue/main.cpp
        "2_3/doubly linked list/hip.h"
        "2_3/doubly linked list/main.cpp"
        "2_3/doubly linked list/static linked list.cpp"
        "2_3/Dynamic allocation of linear tables(C++)/main.cpp"
        "2_3/Dynamic(practice)/main.cpp"
        2_3/Elemtype/main.c
        2_3/Initialization/main.c
        "2_3/Initialization Sequence Table/main.cpp"
        2_3/LinearList/main.c
        "2_3/Linked List/main.cpp"
        "2_3/parenthesis matching/main.cpp"
        2_3/Quene/main.cpp
        "2_3/Single linked list/main.cpp"
        "2_3/Single Linked List(test)/main.cpp"
        "2_3/Single Linker List(Test1)/main.cpp"
        "2_3/Singly linked list creation/main.cpp"
        2_3/Stack/main.cpp
        "2_3/Static linear table/main.cpp"
        "2_3/test(&)/main.c"
        2_3/uChain-Queue/main.cpp
        2_3/uChain-stack/main.cpp
        2_3/CMakeLists.txt
        4/StringNode/main.cpp
        "5/Traversal of binary tree/main.cpp"
        5/untitled/main.cpp
        6/TuoPu/main.cpp)
