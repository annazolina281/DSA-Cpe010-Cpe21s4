#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

// Find the position of the smallest element in the unsorted portion
template <typename T>
int Routine_Smallest(T arr[], int start, int size) {
    int pos = start;
    for (int j = start + 1; j < size; j++) {
        if (arr[j] < arr[pos]) {
            pos = j;
        }
    }
    return pos;
}

// Selection sort implementation
template <typename T>
void selectionSort(T arr[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        int pos = Routine_Smallest(arr, i, size);
        if (pos != i) {
            std::swap(arr[i], arr[pos]); // Swap the smallest found with the current position
        }
    }
}

#endif // SELECTIONSORT_H
