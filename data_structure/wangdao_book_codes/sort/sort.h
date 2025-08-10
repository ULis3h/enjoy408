#ifndef SORT_H
#define SORT_H

#include "common/status.h"
#include "common/types.h"

/** insertion sort */

// Insertion Sort.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(n^2)
Status InsertionSort(ElemType *data, int n);

// Binary Insertion Sort.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(n^2)
Status BinaryInsertionSort(ElemType *data, int n);

// Shell Sort.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(n^1.3)
Status ShellSort(ElemType *data, int n);

// Shell Sort 2.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(n^1.3)
Status ShellSort2(ElemType *data, int n);


/** swap sort */

// Bubble Sort.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(n^2)
Status BubbleSort(ElemType *data, int n);

// Quick Sort.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(nlogn)
Status QuickSort(ElemType *data, int low, int high);

// Quick Sort based on BFS.
// Input: data[] - an array of n elements.
// Output: data[] - a sorted array.
// Time Complexity: O(nlogn)
Status QuickSortBFS(ElemType *data, int n);

#endif // SORT_H
