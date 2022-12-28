#include "../../code/cpp/max_heap.h"

#include <chrono>
#include <random>
#include <cassert>
#include <algorithm>
#include <iostream>

int random(int s, int e) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(s, e);
    return dist(mt);
}

std::vector<int> get_random_vector(int n) {
    std::vector<int> v;
    for (int i = 0; i < n; ++i)
        v.emplace_back(random(-1e9, 1e9));
    return v;
}

void print(const std::vector<int> &v) {
    printf("---------------------------------------------------------------------------\n");
    for (int e : v)
        printf("%d ", e);
    printf("\n---------------------------------------------------------------------------\n");
}

void test_1() {
    std::vector<int> v = get_random_vector(1e6);
    auto start = std::chrono::high_resolution_clock::now();
    MaxHeap mh;
    for (int e : v)
        mh.push(e);
    std::vector<int> v_sorted = v;
    std::sort(v_sorted.begin(), v_sorted.end());
    for (int i = static_cast<int>(v_sorted.size() - 1); i >= 0; --i) {
        assert(mh.top() == v_sorted[i]);
        mh.pop();
    }
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - start);
    std::cout << "max heap test case 1 took " << duration.count() / 1e9 << " seconds" << std::endl;
}

int main() {
    test_1();

    return 0;
}