#include <iostream>

#include "DynamicArray.h"

struct Node {
    Package data;
    Node* left;
    Node* right;

    Node(const Package& d) : data(d), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    //add node to tree
    Node* addP(Node* root, const Package& data);

    //print elements from tree from min to max
    void printP(Node* root);

    //delete node
    void deleteTreeP(Node* root);

public:
    BinaryTree() : root(nullptr) {}

    //public function for users
    void add(const Package& data);
    void print();
    void deleteRoot();
};