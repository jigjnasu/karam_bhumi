#include "../../code/cpp/double_linked_list.h"

void test_case_1() {
    DoublyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_front(i);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();
}

int main() {
    test_case_1();
    return 0;
}