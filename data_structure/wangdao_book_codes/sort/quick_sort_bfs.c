#include <stdio.h>
#include <stdlib.h>

#include "sort.h"
#include "status.h"

#define MAX_QUEUE_SIZE 1000

typedef struct {
  int low;
  int high;
} Range;

Range queue[MAX_QUEUE_SIZE];
int front = 0;
int rear = 0;
void enqueue(int low, int high) {
  if ((rear + 1) % MAX_QUEUE_SIZE == front) {
    fprintf(stderr, "Queue overflow\n");
    exit(EXIT_FAILURE);
  }
  queue[rear] = (Range){low, high};
  rear = (rear + 1) % MAX_QUEUE_SIZE;
}

Range dequeue() {
  if (front == rear) {
    fprintf(stderr, "Queue underflow\n");
    exit(EXIT_FAILURE);
  }
  Range item = queue[front];
  front = (front + 1) % MAX_QUEUE_SIZE;
  return item;
}

int is_empty() { return front == rear; }

// Partition function (optimized with median-of-three)
int partition(int arr[], int low, int high) {
  // Select the median as the pivot
  int mid = low + (high - low) / 2;
  if (arr[low] > arr[mid]) {
    int t = arr[low];
    arr[low] = arr[mid];
    arr[mid] = t;
  }
  if (arr[low] > arr[high]) {
    int t = arr[low];
    arr[low] = arr[high];
    arr[high] = t;
  }
  if (arr[mid] > arr[high]) {
    int t = arr[mid];
    arr[mid] = arr[high];
    arr[high] = t;
  }
  int pivot = arr[mid];

  // Swap the median to the high position
  int t = arr[mid];
  arr[mid] = arr[high];
  arr[high] = t;

  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      t = arr[i];
      arr[i] = arr[j];
      arr[j] = t;
    }
  }
  t = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = t;
  return i + 1;
}

Status QuickSortBFS(ElemType *data, int n) {
  if (n <= 1)
    return OK;

  enqueue(0, n - 1); // Enqueue the initial range

  while (!is_empty()) {
    Range current = dequeue();
    int low = current.low;
    int high = current.high;

    if (low < high) {
      int pivot = partition(data, low, high);

      // Prioritize the smaller partition to optimize queue depth
      if (pivot - low < high - pivot) {
        enqueue(low, pivot - 1);
        enqueue(pivot + 1, high);
      } else {
        enqueue(pivot + 1, high);
        enqueue(low, pivot - 1);
      }
    }
  }
  return OK;
}
