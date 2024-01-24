#ifndef NODE_H

#define NODE_H

class Node {

public:

    int key;
    Node* left;
    Node* right;

    Node(int data) {
        this->key = data;
        left = right = NULL;
    }
};

#endif