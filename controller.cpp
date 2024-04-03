//
// Created by dawid on 29.03.24.
//

#include "controller.h"

controller::controller() {
    HaveMessage = false;
    start();
}

int controller::start() {
    int option = 40;
    while (option != 0) {
        std::cout<<std::endl;
        std::cout<<"******************************* \n";
        std::cout << "Hi, choose option: \n";
        std::cout << "0.Close program. \n";
        std::cout << "1.Generate message. \n";
        std::cout << "2.Show the generated message. \n";
        std::cout << "3.Show the randomed message. \n";
        std::cout << "4.Order message. \n";
        std::cout<<"******************************* \n";
        std::cin >> option;
        switch (option) {
            case 0: {
                std::cout<<std::endl;
                std::cout << "You closed the program.\n";
                break;
            }
            case 1: {
                std::cout<<std::endl;
                std::cout << "You chose option 1.\n";

                    int size;
                    std::cout << "Please add size message.\n";
                    std::cin >> size;
                    Message.generateMessage(size);
                    Message.randomMessage();
                    HaveMessage = true;

                break;
            }
            case 2: {
                std::cout<<std::endl;
                std::cout << "You chose option 2.\n";
                if(HaveMessage)
                    Message.showSendMessage();
                else
                    std::cout<<"First you have to add message. \n";
                break;
            }
            case 3:{
                std::cout<<std::endl;
                std::cout << "You chose option 3.\n";
                if(HaveMessage)
                    Message.showRandomMessage();
                else
                    std::cout<<"First you have to add message. \n";
                break;
            }
            case 4:{
                Tree.deleteRoot();
                std::cout<<std::endl;
                std::cout << "You chose option 4.\n";
                if(HaveMessage) {

                    //start time of opertation
                    auto start = std::chrono::high_resolution_clock::now();

                    //start to write to binary tree
                    for (int index = 0; index < Message.getSize(); index++)
                        Tree.add({Message.getElement(index).text, Message.getElement(index).number});
                    //read elements
                    Tree.print();

                    //end operation and read end time
                    auto end = std::chrono::high_resolution_clock::now();

                    std::chrono::duration<double> time = end - start;

                    std::cout << "Time operation: " << time.count() << " seconds" << std::endl;
                }
                else
                    std::cout<<"First you have to add message. \n";
                break;
            }
            default:
                std::cout << "You added wrong number's option.\n";
                break;

        }
    }
    return 0;
}