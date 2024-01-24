#include <iostream>
#include <algorithm>
#include "node.h"

using namespace std;

#ifndef TREE_H

#define TREE_H


class Tree {

public:
    Node* root;

    Tree() {
        root = NULL;
    }

    virtual void insert(int)= 0;

    void inorder() {
        inorderHelper(root);
    };

    void inorderHelper(Node* root) {
        if(root == NULL) return;

        // left call
        inorderHelper(root->left);

        cout<<root->key<<" ";
        
        // right call
        inorderHelper(root->right);
    }
};

#endif