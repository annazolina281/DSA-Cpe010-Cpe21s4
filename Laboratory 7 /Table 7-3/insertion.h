#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

// Insertion sort function template
template <typename T>
void insertionSort(T arr[], const int N) {
    for (int K = 1; K < N; K++) {
        T temp = arr[K];
        int J = K - 1;

        // Move elements greater than temp to one position ahead
        while (J >= 0 && temp < arr[J]) {
            arr[J + 1] = arr[J];
            J--;
        }
        
        // Place temp in the correct position
        arr[J + 1] = temp;
    }
}

#endif // INSERTIONSORT_H
