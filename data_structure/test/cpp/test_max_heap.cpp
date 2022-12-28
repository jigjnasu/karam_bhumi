#include "../../code/cpp/max_heap.h"

#include <cassert>

void test_1() {
    MaxHeap mh;
    for (int i = 1; i <= 100; ++i)
        mh.push(i);
    for (int i = 100; i > 0; --i) {
        assert(i == mh.top());
        mh.pop();
    }
}

int main() {
    test_1();

    return 0;
}