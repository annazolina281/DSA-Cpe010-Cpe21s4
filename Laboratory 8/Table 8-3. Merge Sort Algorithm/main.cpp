#include <iostream>
#include <cstdlib>
#include <ctime>
#include "merge_sort.h"

using namespace std;

int main() {
    const int size = 100;
    int arr[size];

    srand(time(0)); // Seed for random number generation
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000 + 1; // Fill array with random values
    }

    // Display the unsorted array
    cout << "Unsorted Array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, size - 1); // Call merge sort

    // Display the sorted array
    cout << "Sorted Array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
