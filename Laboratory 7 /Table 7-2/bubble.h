#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <algorithm>  // For std::swap

// Template function for bubble sort
template <typename T>
void bubble(T arr[], size_t arrSize) {
    for (size_t i = 0; i < arrSize - 1; i++) {
        for (size_t j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif  // BUBBLESORT_H
