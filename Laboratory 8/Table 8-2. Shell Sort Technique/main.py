#include <iostream>
#include <cstdlib>
#include <ctime>
#include "shellsort.h" // Include the shellsort header

using namespace std;

int main() {
    const int size = 100;
    int arr[size];

    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1; // Fill the array with random values between 1 and 100
    }

    cout << "Unsorted Array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    shellSort(arr, size); // Call the shell sort function

    cout << "Sorted Array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
