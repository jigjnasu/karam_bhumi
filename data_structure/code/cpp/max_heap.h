#ifndef LEARNING_AREA_DATA_STRUCTURE_CODE_CPP_MAX_HEAP_H_
#define LEARNING_AREA_DATA_STRUCTURE_CODE_CPP_MAX_HEAP_H_

#include <vector>
#include <cstdio>

class MaxHeap {
public:
    void push(int val) {
        heap.emplace_back(val);
        int index = static_cast<int>(heap.size() - 1);
        int p = parent(index);
        while (p >= 0 && heap[p] < heap[index]) {
            std::swap(heap[index], heap[p]);
            index = p;
            p = parent(index);
        }
    }

    int top() const {
        return heap[0];
    }

    void pop() {
        std::swap(heap[0], heap[heap.size() - 1]);
        heap.erase(heap.end() - 1, heap.end());
        const int n = static_cast<int>(heap.size());
        for (int i = 0; i <= (n << 1); ++i)
            maxify(i);
    }

    int size() const {
        return static_cast<int>(heap.size());
    }

    bool empty() const {
        return heap.size() == 0;
    }

    void print() const {
        printf("---------------------------------------------------------------------------\n");
        for (int e : heap)
            printf("%d ", e);
        printf("\n---------------------------------------------------------------------------\n");
    }

private:

    void maxify(int index) {
        while (true) {
            int largest = index;
            const int l = left(index);
            const int r = right(index);
            if (l < heap.size() && heap[l] > heap[largest])
                largest = l;
            if (r < heap.size() && heap[r] > heap[largest])
                largest = r;
            if (largest == index)
                break;
            std::swap(heap[index], heap[largest]);
            index = largest;
        }
    }

    int parent(const int index) {
        if (index & 1)
            return (index >> 1);
        else
            return (index >> 1) - 1;
    }

    int left(const int index) const {
        return (index << 1) + 1;
    }

    int right(const int index) const {
        return (index << 1) + 2;
    }
    
    std::vector<int> heap;
};
#endif // LEARNING_AREA_DATA_STRUCTURE_CODE_CPP_MAX_HEAP_H_