#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_QUICK_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_QUICK_H_

#include <vector>
#include <random>

class Quick {
public:
    void sort(std::vector<int> &v) {
        quick_sort(v, 0, v.size() - 1);
    }

private:
    void quick_sort(std::vector<int> &v, int low, int high) {
        if (low < high) {
            const int pivot = partition(v, low, high);
            quick_sort(v, low, pivot - 1);
            quick_sort(v, pivot + 1, high);
        }
    }

    int partition(std::vector<int> &v, int low, int high) {
        const int index = random(low, high - 1);
        swap(v[index], v[high]);

        int i = low - 1;
        for (int j = low; j < high; ++j) {
            if (v[j] <= v[high]) {
                ++i;
                if (i != j)
                    swap(v[i], v[j]);
            }
        }
        if (high != i + 1)
            swap(v[high], v[i + 1]);
        return i + 1;
    }

    int random(int s, int e) {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(s, e);
        return dist(mt);
    }

    void swap(int &a, int &b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_QUICK_H_