//
// Created by marco on 12/03/18.
//

#include "QuickSort.h"
#include <iostream>

void swap(int low, int high, bigarray array){
    int swapValue = array[low];
    array[low] = array[high];
    array[high] = swapValue;
}


void quickSort(bigarray array, int low,int high){

    if (high <= low){return;}
    int i = low;
    int j = high;
    int middle = (high+low)/2;
    int pivot = array[middle];

    while (i<j){

        if (array[i] >= pivot) {
            if (array[j] <= pivot) {
                swap(i,j,array);
                if (i == middle)
                    middle = j;
                else if (j == middle)
                    middle = i;
            } else { j--;}

        }else{i++;}

    }
    quickSort(array,low,middle);
    quickSort(array,middle+1,high);

}

void printArray(bigarray array,int size){
    for (int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
}