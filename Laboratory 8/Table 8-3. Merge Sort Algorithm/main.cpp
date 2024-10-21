#include <iostream>
#include <cstdlib>
#include <ctime>
#include "merge_sort.h" // Include the merge sort header

using namespace std;

int main() {
    const int size = 100;
    int arr[size];

    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // Fill array with random values between 1 and 100
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
