## Use case of header file in c++

**Problem :** Suppose I want to construct a complete binary tree and binary search tree. And I want to traverse through the tree.

**Solution :** CBT and BST will share the same logic to traverse through the tree. Only difference will be their data inserion technique. So I created node.h and tree.h header file. tree.h contains the node structure created in node.h header file to represent the tree structure. then complete binary tree and binary search tree will inherit the tree structure. then in each header file they implement their own insertion technique.
