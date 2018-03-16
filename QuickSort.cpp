//
// Created by marco on 12/03/18.
//

#include "QuickSort.h"
#include <iostream>
#include "bigarray.h"

void swap(int* low, int* high){
    int swapValue = *low;
    *low = *high;
    *high = swapValue;
}

void quickSort(bigarray array, int low, int high){
    if (low < high) {
        int pivot = array[high];
        int i = (low - 1);

        for (int j = low; j <= high- 1; j++) {
            if (array[j] <= pivot) {
                i++;
                swap(&array[i], &array[j]);
            }
        }
        swap(&array[i + 1], &array[high]);

        quickSort(array, low, i);
        quickSort(array, i +2, high);
    }
}
void printArray(bigarray array, int size){
    for (int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
}