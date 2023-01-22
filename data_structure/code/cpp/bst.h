#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_BST_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_BST_H_

#include <bits/stdc++.h>

struct BSTNode {
    BSTNode(int val) : data(val) {}

    BSTNode *left = nullptr;
    BSTNode *right = nullptr;
    int data = 0;
};

class BST {
public:
    void insert(int val) {
        if (root == nullptr) {
            root = new BSTNode(val);
        } else {
            BSTNode *node = root;
            while (node) {
                if (val < node->data) {
                    if (node->left == nullptr) {
                        node->left = new BSTNode(val);
                        break;
                    }
                    node = node->left;
                } else {
                    if (node->right == nullptr) {
                        node->right = new BSTNode(val);
                        break;
                    }
                    node = node->right;
                }
            }
        }
    }

private:
    BSTNode *root = nullptr;
};

#endif // # LEARNING_AREA_ALGORITHMS_CODE_CPP_BST_H_