//
// Created by dawid on 29.03.24.
//


#ifndef PROJECT_1_DYNAMICARRAY_H
#define PROJECT_1_DYNAMICARRAY_H

#include <cstdlib>
#include <iostream>

struct Package{
    char text;
    int number;
};

class DynamicArray {
    //variable of generating message
    Package *sendArray;
    Package *randomArray;
    int sizeArray;

public:
    DynamicArray();
    ~DynamicArray();
    //setting size array
    int setSize(int size);
    //here draw symbol for message and push this symbol to sendArray
    int generateMessage(int size);
    //print sendArray
    int showSendMessage();
    //mix elements in sendArray and wrtite this to randomArray
    int randomMessage();
    //print randomArray
    int showRandomMessage();
    //give element from randomArray
    Package getElement(int i);
    //give size of array
    int getSize();

};


#endif //PROJECT_1_DYNAMICARRAY_H
