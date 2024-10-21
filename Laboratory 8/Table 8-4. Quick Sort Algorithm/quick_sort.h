#ifndef QUICK_SORT_H
#define QUICK_SORT_H

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1; // Choosing the last element as pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]); // Swap smaller elements to the front
        }
    }
    std::swap(arr[i + 1], arr[high]); // Place pivot in the correct position
    return i + 1; // Return pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1); // Sort left part
        quickSort(arr, pivot + 1, high); // Sort right part
    }
}

#endif // QUICK_SORT_H
