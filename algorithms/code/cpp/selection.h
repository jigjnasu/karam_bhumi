#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_SELECTION_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_SELECTION_H_

#include <vector>

class Selection {
public:
    void sort(std::vector<int> &v) {
        for (std::size_t i = 0; i < v.size(); ++i) {
            std::size_t min_index = i;
            for (std::size_t j = i + 1; j < v.size(); ++j) {
                if (v[j] < v[min_index])
                    min_index = j;
            }
            if (i != min_index)
                swap(v[i], v[min_index]);
        }
    }

private:
    void swap(int &a, int &b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_SELECTION_H_