cmake_minimum_required(VERSION 3.26)
project(Doubly_linked_list)

set(CMAKE_CXX_STANDARD 17)

add_executable(Doubly_linked_list main.cpp
        "static linked list.cpp"
        hip.h)
