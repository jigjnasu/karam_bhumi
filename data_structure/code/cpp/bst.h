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

    void mirror() {
        mirror_tree(root);
    }

    bool valid_bst() {
        return valid_tree(root);
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

    void bfs() {
        printf("--------------------------------------------------------------------\n");
        std::queue<BSTNode *> queue;
        if (root != nullptr)
            queue.push(root);
        while (!queue.empty()) {
            BSTNode *node = queue.front();
            queue.pop();
            printf("%d ", node->data);
            if (node->left)
                queue.push(node->left);
            if (node->right)
                queue.push(node->right);
        }
        printf("\n--------------------------------------------------------------------\n");
    }

    void print_by_levels() {
        const int h = height(root);
        std::vector<std::vector<int>> v(h);
        get_nodes_by_levels(root, 0, v);
        printf("--------------------------------------------------------------------\n");
        for (std::size_t i = 0; i < v.size(); ++i) {
            printf("level [%4d] >>> ", i + 1);
            for (int e : v[i])
                printf("%d ", e);
            printf("\n");
        }
        printf("--------------------------------------------------------------------\n");
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

    void mirror_tree(BSTNode *root) {
        if (root) {
            BSTNode *temp = root->left;
            root->left = root->right;
            root->right = temp;

            mirror_tree(root->left);
            mirror_tree(root->right);
        }
    }

    bool valid_tree(BSTNode *root) {
        if (root) {
            if (root->left)
                if (root->left->data > root->data)
                    return false;
            if (root->right)
                if (root->right->data < root->data)
                    return false;
            return valid_tree(root->left);
            return valid_tree(root->right);
        }
        return true;
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

    int height(BSTNode *root) {
        if (root == nullptr)
            return 0;
        const int left = height(root->left);
        const int right = height(root->right);
        return std::max(left, right) + 1;
    }

    void get_nodes_by_levels(BSTNode *root, int level, std::vector<std::vector<int>>& data) {
        if (root) {
            data[level].emplace_back(root->data);
            get_nodes_by_levels(root->left, level + 1, data);
            get_nodes_by_levels(root->right, level + 1, data);
        }
    }
};

#endif // # LEARNING_AREA_ALGORITHMS_CODE_CPP_BST_H_