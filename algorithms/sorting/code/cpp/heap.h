#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_HEAP_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_HEAP_H_

#include <vector>

class Heap {
public:
    void sort(std::vector<int> &v) {
        const int n = static_cast<int>(v.size());
        build_heap(v, n);
        for (int i = n - 1; i >= 0; --i) {
            std::swap(v[i], v[0]);
            maxify(v, i, 0);
        }
    }

private:
    void build_heap(std::vector<int> &v, int n) {
        for (int i = n >> 1; i >= 0; --i)
            maxify(v, n, i);
    }

    void maxify(std::vector<int> &v, int n, int index) {
        while (true) {
            int largest = index;
            int l = left(index);
            int r = right(index);
            if (l < n && v[l] > v[largest])
                largest = l;
            if (r < n && v[r] > v[largest])
                largest = r;
            if (index == largest)
                break;
            std::swap(v[largest], v[index]);
            index = largest;
        }
    }

    int left(int index) {
        return (index << 1) + 1;
    }

    int right(int index) {
        return (index << 1) + 2;
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_HEAP_H_