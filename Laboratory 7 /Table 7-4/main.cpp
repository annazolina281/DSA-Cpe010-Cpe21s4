#include <iostream>
#include <cstdlib>
#include <ctime>
#include "insertion.h"  // Include the renamed header file

using namespace std;

#define ARRAY_SIZE 100

// Generate a random array of integers
void randArray(int arr[], int size) {
    srand(static_cast<unsigned>(time(0)));  // Seed random number generator
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;  // Random numbers between 0 and 999
    }
}

// Print an array of integers
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[ARRAY_SIZE];
    
    randArray(arr, ARRAY_SIZE);  // Generate random array

    cout << "Unsorted array:\n";
    printArray(arr, ARRAY_SIZE);

    insertionSort(arr, ARRAY_SIZE);  // Sort the array

    cout << "Sorted array:\n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
