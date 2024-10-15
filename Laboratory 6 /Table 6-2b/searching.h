// searching.h
#ifndef SEARCHING_H
#define SEARCHING_H

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

#endif // SEARCHING_H
