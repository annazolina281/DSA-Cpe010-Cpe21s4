#ifndef SELECTION_H
#define SELECTION_H

#include <algorithm>  // For std::swap

// Find the position of the smallest element in the unsorted portion
template <typename T>
int findSmallestPosition(T arr[], int start, int size) {
    int pos = start;
    for (int j = start + 1; j < size; j++) {
        if (arr[j] < arr[pos]) {
            pos = j;  // Update position if a smaller element is found
        }
    }
    return pos;  // Return the index of the smallest element
}

// Selection sort implementation
template <typename T>
void selectionSort(T arr[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        int pos = findSmallestPosition(arr, i, size);
        if (pos != i) {
            std::swap(arr[i], arr[pos]); // Swap the smallest found with the current position
        }
    }
}

#endif // SELECTION_H
