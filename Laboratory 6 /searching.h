#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>

// Linear search function that takes an array, its size, and the item to search
void linearSearch(int data[], int n, int item) {
    for (int i = 0; i < n; i++) {
        if (data[i] == item) {
            std::cout << "Searching is successful: " << item << " found.\n";
            return; // Exit the function if the item is found
        }
    }
    std::cout << "Searching is Unsuccessful: " << item << " not found.\n"; // If not found
}

#endif // SEARCHING_H
