//
// Created by dawid on 29.03.24.
//

#include "BinaryTree.h"

Node* BinaryTree::addP(Node* root, const Package& data)  {
        if (root == nullptr) {
            std::cout<<data.text<<std::endl;
            return new Node(data);
        }

        if (data.number < root->data.number) {
            root->left = addP(root->left, data);
        } else if (data.number > root->data.number) {
            root->right = addP(root->right, data);
        }
        return root;
    }

void BinaryTree::add(const Package& data) {
    root = addP(root, data);
}

void BinaryTree::deleteTreeP(Node *root) {
    if(root != nullptr){
        deleteTreeP(root -> left);
        deleteTreeP(root -> right);
        delete root;
    }
}

void BinaryTree::deleteRoot() {
    deleteTreeP(root);
    root = nullptr;
}

void BinaryTree::printP(Node* root) {
    if (root != nullptr) {
        printP(root->left);
        std::cout << root->data.text;
        printP(root->right);
    }
}

void BinaryTree::print() {
    printP(root);
    std::cout << std::endl;
}