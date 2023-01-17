#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_SINGLE_LINKED_LIST_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_SINGLE_LINKED_LIST_H_

#include <bits/stdc++.h>

struct SingleLinkedListNode {
    SingleLinkedListNode(int val) : data(val) {}
 
    SingleLinkedListNode* next = nullptr;
    int data = 0;
};

class SinglyLinkedList {
public:
    void push_back(int val) {
        if (head == nullptr) {
            head = new SingleLinkedListNode(val);
        } else {
            SingleLinkedListNode *node = head;
            while (node->next)
                node = node->next;
            node->next = new SingleLinkedListNode(val);
        }
        ++sz;
    }

    void traverse() const {
        printf("--------------------------------------------------------------------------\n");
        SingleLinkedListNode *node = head;
        while (node) {
            printf("%d ", node->data);
            node = node->next;
        }
        printf("\n--------------------------------------------------------------------------\n");
    }

    int size() const {
        return sz;
    }

private:
    SingleLinkedListNode *head = nullptr;
    int sz = 0;
};

#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_SINGLE_LINKED_LIST_H_