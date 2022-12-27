#ifndef LEARNING_AREA_ALGORITHMS_CODE_CPP_BUBBLE_H_
#define LEARNING_AREA_ALGORITHMS_CODE_CPP_BUBBLE_H_

#include <vector>

class Bubble {
public:
    void sort(std::vector<int> &v) {
        for (std::size_t i = 0; i < v.size(); ++i)
            for (std::size_t j = i + 1; j < v.size(); ++j)
                if (v[j] < v[i])
                    std::swap(v[i], v[j]);
    }
};
#endif // LEARNING_AREA_ALGORITHMS_CODE_CPP_BUBBLE_H_