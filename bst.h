#include <iostream>
#include "tree.h"
using namespace std;

#ifndef BST_H

#define BST_H


class BST : public Tree {

public:

    void insert(int data) override{
        root = insertHelper(root,data);
    }


    Node* insertHelper(Node* root,int data) {
        if(root == NULL) {
            return new Node(data);
        }

        if(data <= root->key) {
            root->left = insertHelper(root->left,data);
        } else {
            root->right = insertHelper(root->right,data);
        }

        return root;
    }
};

#endif