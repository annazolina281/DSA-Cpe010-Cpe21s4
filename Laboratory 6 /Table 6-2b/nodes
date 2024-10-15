#ifndef NODES_H
#define NODES_H

template <typename T>
class Node {
public:
    T data;        // Data stored in the node
    Node* next;    // Pointer to the next node
};

// Function to create a new node
template <typename T>
Node<T>* new_node(T newData) {
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;  
    newNode->next = NULL;
    return newNode;
}

#endif // NODES_H
