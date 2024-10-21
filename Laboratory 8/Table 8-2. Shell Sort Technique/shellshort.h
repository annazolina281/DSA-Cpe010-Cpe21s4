#ifndef SHELLSORT_H
#define SHELLSORT_H

void shellSort(int arr[], int size) 
{
    for (int intvl = size / 2; intvl > 0; intvl /= 2) 
    {
        for (int i = intvl; i < size; i++) 
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= intvl && arr[j - intvl] > temp; j -= intvl) 
            {
                arr[j] = arr[j - intvl];
            }
            arr[j] = temp;
        }
    }
}

#endif // SHELLSORT_H
