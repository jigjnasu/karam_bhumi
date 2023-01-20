#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_DOUBLE_LINKED_LIST_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_DOUBLE_LINKED_LIST_H_

#include <bits/stdc++.h>

struct DoublyLinkedListNode {
    DoublyLinkedListNode(int val) : data(val) {}
    
    DoublyLinkedListNode *prev = nullptr;
    DoublyLinkedListNode *next = nullptr;
    int data = 0;
};

class DoublyLinkedList {
public:
    void push_front(int val) {
        if (head == nullptr && tail == nullptr) {
            head = tail = new DoublyLinkedListNode(val);
        } else {
            DoublyLinkedListNode *node = new DoublyLinkedListNode(val);
            node->next = head;
            head->prev = node;
            head = node;
        }
        ++sz;
    }

    void push_back(int val) {
        if (head == nullptr && tail == nullptr) {
            head = tail = new DoublyLinkedListNode(val);
        } else {
            DoublyLinkedListNode *node = new DoublyLinkedListNode(val);
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
    }

    void traverse_from_head() {
        DoublyLinkedListNode *node = head;
        printf("----------------------------------------------------------\n");
        while (node) {
            printf("%d ", node->data);
            node = node->next;
        }
        printf("\n----------------------------------------------------------\n");
    }

    void traverse_from_tail() {
        DoublyLinkedListNode *node = tail;
        printf("----------------------------------------------------------\n");
        while (node) {
            printf("%d ", node->data);
            node = node->prev;
        }
        printf("\n----------------------------------------------------------\n");
    }

private:
    DoublyLinkedListNode *head = nullptr;
    DoublyLinkedListNode *tail = nullptr;

    int sz = 0;
};

#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_DOUBLE_LINKED_LIST_H_