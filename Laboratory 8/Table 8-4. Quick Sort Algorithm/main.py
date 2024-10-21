#include <iostream>
#include <cstdlib>
#include <ctime>
#include "quick_sort.h" // Include the quick sort header

using namespace std;

int main() {
    const int size = 100;
    int arr[size];

    srand(time(0)); // Seed for random number generation
    for (int& num : arr) num = rand() % 1000 + 1; // Fill array with random values

    cout << "Unsorted Array:\n";
    for (int num : arr) cout << num << " ";
    cout << endl;

    quickSort(arr, 0, size - 1); // Call quick sort

    cout << "Sorted Array:\n";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
