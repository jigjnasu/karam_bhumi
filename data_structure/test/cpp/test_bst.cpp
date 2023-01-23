#include "../../code/cpp/bst.h"

void test_case_1() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 1\n");
    printf("--------------------------------------------------------------------\n");

    std::vector<int> v = {50, 25, 75, 100, 200, 65, 15, 30, 5, 2, 1};
    BST bst;
    for (int e : v)
        bst.insert(e);
    bst.pre_order_traversal();
    bst.in_order_traversal();
    bst.post_order_traversal();
    bst.bfs();
    bst.print_by_levels();
}

void test_case_2() {
    printf("--------------------------------------------------------------------\n");
    printf("            TEST CASE 2\n");
    printf("--------------------------------------------------------------------\n");

    std::vector<int> v = {50, 25, 75, 100, 200, 65, 15, 30, 5, 2, 1};
    BST bst;
    for (int e : v)
        bst.insert(e);
    bst.print_by_levels();
    bst.mirror();
    bst.print_by_levels();
}


int main() {
    test_case_1();
    test_case_2();

    return 0;
}