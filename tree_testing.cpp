#include <bits/stdc++.h>
#include "cbt.h"
#include "bst.h"
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    CBT cbt;
    BST bst;

    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        cbt.insert(x);
        bst.insert(x);
    }

    cout<<"Inorder traversal in complete binary tree"<<endl;
    cbt.inorder();

    cout<<"\nInorder traversal in binary search tree"<<endl;
    bst.inorder();
}