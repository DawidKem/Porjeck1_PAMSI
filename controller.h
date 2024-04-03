//
// Created by dawid on 29.03.24.
//
#include <iostream>
#include <chrono>

#include "DynamicArray.h"
#include "BinaryTree.h"

#ifndef PROJECT_1_CONTROLLER_H
#define PROJECT_1_CONTROLLER_H


class controller {

    bool HaveMessage;
    DynamicArray Message;
    BinaryTree Tree;

public:
    controller();
    //menu whit option to generate, mix and print message
    int start();
    //~controller();

};


#endif //PROJECT_1_CONTROLLER_H
