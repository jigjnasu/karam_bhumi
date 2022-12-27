#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_INSERTION_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_INSERTION_H_

#include <vector>

class Insertion {
public:
    void sort(std::vector<int> &v) {
        for (std::size_t i = 1; i < v.size(); ++i) {
            int j = static_cast<int>(i);
            while (j > 0 && v[j - 1] > v[j]) {
                std::swap(v[j], v[j - 1]);
                --j;
            }
        }
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_INSERTION_H_