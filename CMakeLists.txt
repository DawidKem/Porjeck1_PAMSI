cmake_minimum_required(VERSION 3.27)
project(Pamsi_projeckt1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pamsi_projeckt1 main.cpp
        controller.cpp
        controller.h
        DynamicArray.cpp
        DynamicArray.h
        BinaryTree.cpp
        BinaryTree.h)
