//
// Created by marco on 12/03/18.
//

#ifndef TAREACORTA1_QUICKSORT_H
#define TAREACORTA1_QUICKSORT_H

#include "bigarray.h"

/**
 * Quick sort algorithm
 * @param array to be sorted
 * @param low index of the array
 * @param high index of the array
 */
void quickSort(bigarray array, int low, int high);

/**
 * Print an array
 * @param array to print
 * @param size of the array
 */
void printArray(bigarray array, int size);

#endif //TAREACORTA1_QUICKSORT_H
