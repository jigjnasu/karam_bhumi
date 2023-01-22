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
        root = insert_node(root, val);
    }

    void pre_order_traversal() {
        printf("--------------------------------------------------------------------\n");
        pre_order(root);
        printf("\n--------------------------------------------------------------------\n");
    }

    void in_order_traversal() {
        printf("--------------------------------------------------------------------\n");
        in_order(root);
        printf("\n--------------------------------------------------------------------\n");
    }

    void post_order_traversal() {
        printf("--------------------------------------------------------------------\n");
        post_order(root);
        printf("\n--------------------------------------------------------------------\n");
    }


private:
    BSTNode *root = nullptr;

    BSTNode* insert_node(BSTNode *root, int val) {
        if (root == nullptr) {
            return new BSTNode(val);
        } else {
            if (val < root->data)
                root->left = insert_node(root->left, val);
            else
                root->right = insert_node(root->right, val);
        }
        return root;
    }

    void pre_order(BSTNode *root) {
        if (root) {
            printf("%d ", root->data);
            pre_order(root->left);
            pre_order(root->right);
        }
    }

    void in_order(BSTNode *root) {
        if (root) {
            in_order(root->left);
            printf("%d ", root->data);
            in_order(root->right);
        }
    }

    void post_order(BSTNode *root) {
        if (root) {
            post_order(root->left);
            post_order(root->right);
            printf("%d ", root->data);
        }
    }
};

#endif // # LEARNING_AREA_ALGORITHMS_CODE_CPP_BST_H_