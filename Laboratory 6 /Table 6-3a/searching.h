#ifndef SEARCHING2_H
#define SEARCHING2_H

#include <iostream>

template <typename T>
void linearLS(Node<T>* head, T dataFind) {
    for (Node<T>* current = head; current != nullptr; current = current->next) {
        if (current->data == dataFind) {
            std::cout << "Searching is successful: " << dataFind << " found.\n";
            return;
        }
    }
    std::cout << "Searching is Unsuccessful: " << dataFind << " not found.\n";
}

// Binary Search Function
template <typename T>
void binarySearch(T arr[], int n, T no) {
    int low = 0;
    int up = n - 1;

    while (low <= up) {
        int mid = low + (up - low) / 2; // Calculate mid to prevent overflow
        if (arr[mid] == no) {
            std::cout << "Search element is found!\n";
            return;
        }
        else if (no < arr[mid]) {
            up = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    std::cout << "Search element is not found.\n";
}

#endif // SEARCHING2_H
