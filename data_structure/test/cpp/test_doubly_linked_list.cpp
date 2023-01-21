#include "../../code/cpp/double_linked_list.h"

void test_case_1() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 1\n");
    printf("--------------------------------------------------------------------\n");
    DoublyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_front(i);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();

    DoublyLinkedList ll_b;
    for (int i = 1; i <= 20; ++i)
        ll_b.push_back(i);
    ll_b.traverse_from_head();
    ll_b.traverse_from_tail();
}

void test_case_2() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 2\n");
    printf("--------------------------------------------------------------------\n");
    DoublyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.insert_at(i, i);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();

    ll_a.insert_at(99, 9);
    ll_a.insert_at(33, 3);
    ll_a.insert_at(88, 8);
    ll_a.insert_at(101, 22);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();
}

void test_case_3() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 3\n");
    printf("--------------------------------------------------------------------\n");
    DoublyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.insert_at(i, i);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();

    ll_a.delete_at(3);
    ll_a.delete_at(3);
    ll_a.delete_at(3);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();

    ll_a.delete_at(1);
    ll_a.delete_at(ll_a.size());
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();    

    printf("size of doubly linked list == [%d]\n", ll_a.size());

    for (int i = 1; i < 15; ++i)
        ll_a.delete_at(i);
    ll_a.traverse_from_head();
    ll_a.traverse_from_tail();    
}

int main() {
    test_case_1();
    test_case_2();
    test_case_3();

    return 0;
}