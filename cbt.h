#include <iostream>
#include <queue>
#include "tree.h"

using namespace std;

#ifndef CBT_H

#define CBT_H

class CBT : public Tree {

public:

    void insert(int data) override {
        root = insertHelper(root,data);
    }

    Node* insertHelper(Node* root,int data) {
        if(root == NULL) {
            return new Node(data);
        }

        queue<Node* > q;
        q.push(root);

        while(!q.empty()) {
            Node* cur = q.front();
            q.pop();

            if(cur->left == NULL) {
                cur->left = new Node(data);
                break;
            } else {
                q.push(cur->left);
            }

            if(cur->right == NULL) {
                cur->right = new Node(data);
                break;
            } else {
                q.push(cur->right);
            }
        }

        return root;
    }

};


#endif