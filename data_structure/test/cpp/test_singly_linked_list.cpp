#include "../../code/cpp/single_linked_list.h"

void test_case_1() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 1\n");
    printf("--------------------------------------------------------------------\n");
    SinglyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_back(i);
    ll_a.traverse();

    SinglyLinkedList ll_b;
    for (int i = 1; i <= 20; ++i)
        ll_b.push_front(i);
    ll_b.traverse();
    printf("--------------------------------------------------------------------\n");
}

void test_case_2() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 2\n");
    printf("--------------------------------------------------------------------\n");
    SinglyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.insert_at(i, i);
    ll_a.traverse();

    ll_a.insert_at(100, 0);
    ll_a.insert_at(300, 3);
    ll_a.insert_at(301, 3);
    ll_a.insert_at(111, 4);
    ll_a.insert_at(99, 9);
    ll_a.traverse();
    printf("--------------------------------------------------------------------\n");
}

void test_case_3() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 3\n");
    printf("--------------------------------------------------------------------\n");
    SinglyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_back(i);
    ll_a.traverse();

    for (int i = 20; i > 1; --i)
        ll_a.delete_at(i);
    ll_a.traverse();

    for (int i = 2; i <= 20; ++i)
        ll_a.insert_at(i, i);
    ll_a.traverse();

    ll_a.delete_at(10);
    ll_a.delete_at(5);
    ll_a.delete_at(23);
    ll_a.delete_at(0);
    ll_a.traverse();

    printf("--------------------------------------------------------------------\n");
}

void test_case_4() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 4\n");
    printf("--------------------------------------------------------------------\n");
    SinglyLinkedList ll_a;
    for (int i = 1; i <= 20; ++i)
        ll_a.push_back(i);
    ll_a.traverse();
    ll_a.reverse();
    ll_a.traverse();
    printf("--------------------------------------------------------------------\n");
}


int main() {
    test_case_1();
    test_case_2();
    test_case_3();
    test_case_4();
   
    return 0;
}