#include "../../code/cpp/single_linked_list.h"

void test_case_1() {
    SinglyLinkedList ll;
    for (int i = 1; i <= 20; ++i)
        ll.push_back(i);
    ll.traverse();
}

int main() {
    test_case_1();
    
    return 0;
}