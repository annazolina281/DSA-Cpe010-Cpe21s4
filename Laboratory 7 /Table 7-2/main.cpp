#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bubbleSort.h"  // Include bubble sort header

using namespace std;

#define ARRAY_SIZE 100

// Function to generate a random array of integers
void randArray(int arr[], size_t size) {
    srand(static_cast<unsigned>(time(0)));  // Seed random number generator
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 1000;  // Random numbers between 0 and 999
    }
}

// Function to print an array of integers
void printArray(const int arr[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[ARRAY_SIZE];
    
    randArray(arr, ARRAY_SIZE);  // Generate random array

    cout << "Unsorted array:\n";
    printArray(arr, ARRAY_SIZE);

    bubbleSort(arr, ARRAY_SIZE);  // Sort the array

    cout << "Sorted array:\n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
