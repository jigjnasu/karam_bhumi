#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_MERGE_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_MERGE_H_

#include <vector>

class Merge {
public:
    void sort(std::vector<int> &v) {
        merge_sort(v, 0, v.size() - 1);
    }

private:
    void merge_sort(std::vector<int> &v, int low, int high) {
        if (low < high) {
            const int mid = (low + high) >> 1;
            merge_sort(v, low , mid);
            merge_sort(v, mid + 1, high);
            merge(v, low, mid, high);
        }
    }

    void merge(std::vector<int> &v, int low, int mid, int high) {
        std::vector<int> left;
        for (int i = low; i <= mid; ++i)
            left.emplace_back(v[i]);
        std::vector<int> right;
        for (int i = mid + 1; i <= high; ++i)
            right.emplace_back(v[i]);
        
        int i = low;
        int li = 0;
        int ri = 0;
        while (li < static_cast<int>(left.size()) && ri < static_cast<int>(right.size())) {
            if (left[li] < right[ri])
                v[i++] = left[li++];
            else
                v[i++] = right[ri++];
        }

        while (li < static_cast<int>(left.size()))
            v[i++] = left[li++];
        while (ri < static_cast<int>(right.size()))
            v[i++] = right[ri++];
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_MERGE_H_