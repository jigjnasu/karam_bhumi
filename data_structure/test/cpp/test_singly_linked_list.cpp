#include "../../code/cpp/single_linked_list.h"

void test_case_1() {
    SinglyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_back(i);
    ll_a.traverse();

    SinglyLinkedList ll_b;
    for (int i = 1; i <= 20; ++i)
        ll_b.push_front(i);
    ll_b.traverse();
}

int main() {
    test_case_1();
    
    return 0;
}