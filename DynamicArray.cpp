//
// Created by dawid on 29.03.24.
//

#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    sizeArray = 1;
    sendArray = new Package[sizeArray];
}

DynamicArray::~DynamicArray() {
    delete[] sendArray;
    delete[] randomArray;
}



int DynamicArray::setSize(int size) {
    sizeArray = size;
    return 0;
}

int DynamicArray::generateMessage(int size) {
    setSize(size);
    delete sendArray;
    sendArray = new Package[sizeArray];

    int asciiChar;
    srand(time(NULL));
    for(int index = 0; index < sizeArray; index++){
        asciiChar = rand() % 90 + 32;
        while(asciiChar == 10)
            asciiChar = rand() % 125;
        sendArray[index].text = asciiChar;
        sendArray[index].number = index + 1;
    }
    return 0;
}

int DynamicArray::showSendMessage() {
    for(int index = 0; index < sizeArray; index++)
    {
        std::cout<< sendArray[index].text;
    }
    std::cout<<"\n";
    std::cout<<"Last item nuumber: "<<sendArray[sizeArray - 1].number<<" text: "<<sendArray[sizeArray - 1].text;
    std::cout<<"\n";
    return 0;
}

int DynamicArray::randomMessage() {
    randomArray = new Package[sizeArray];
    Package *tmpArray = new Package[sizeArray];

    for(int index = 0; index < sizeArray; index++)
    {
        tmpArray[index] = sendArray[index];
    }
    srand(time(NULL));
    int j = 0, i = 0;

    for(int index = sizeArray - 1; index >= 0; index--)
    {
        j = rand()% (index + 1);
        randomArray[i] = tmpArray[j];
        // std::cout<<tmpArray[j].text;
        tmpArray[j] = tmpArray[index];
        i++;
    }
    delete[] tmpArray;
    return 0;
}

int DynamicArray::showRandomMessage() {
    for(int index = 0; index < sizeArray; index++)
    {
        std::cout<< randomArray[index].text;
    }
    std::cout<<"\n";
    return 0;
}

Package DynamicArray::getElement(int i) {
    return randomArray[i];
}

int DynamicArray::getSize() {
    return sizeArray;
}