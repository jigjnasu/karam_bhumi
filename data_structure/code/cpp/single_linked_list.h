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
    ~SinglyLinkedList() {
        SingleLinkedListNode *node = head;
        while (node) {
            SingleLinkedListNode *temp = node;
            node = node->next;
            delete temp;
        }
    }

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

    void push_front(int val) {
        if (head == nullptr) {
            head = new SingleLinkedListNode(val);
        } else {
            SingleLinkedListNode *node = new SingleLinkedListNode(val);
            node->next = head;
            head = node;
        }
        ++sz;
    }

    void insert_at(int val, int pos) {
        if (pos < 1 || pos > sz + 1) {
            printf("Error: can't insert item at this [%4d] location\n", pos);
            return;
        }
        if (pos == 1) {
            if (head == nullptr) {
                head = new SingleLinkedListNode(val);
            } else {
                SingleLinkedListNode *node = new SingleLinkedListNode(val);
                head->next = node;
                head = node;
            }
        } else {
            SingleLinkedListNode *node = head;
            for (int i = 1; i < pos - 1; ++i)
                node = node->next;
            SingleLinkedListNode *temp = new SingleLinkedListNode(val);
            temp->next = node->next;
            node->next = temp;
        }
        ++sz;
    }

    void delete_at(int pos) {
        if (pos < 1 || pos > sz) {
            printf("Error: can't delete item at this [%4d] location\n", pos);
            return;
        }
        if (pos == 1) {
            SingleLinkedListNode *node = head;
            head = head->next;
            delete node;
        } else {
            SingleLinkedListNode *node = head;
            for (int i = 1; i < pos - 1; ++i)
                node = node->next;
            SingleLinkedListNode *temp = node->next;
            node->next = node->next->next;
            delete temp;
        }
        --sz;
    }

    void reverse() {
        SingleLinkedListNode *prev = nullptr, *curr = head, *next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
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