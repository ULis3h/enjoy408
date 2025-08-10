#include "sort.h"
#include "status.h"

int swap(ElemType *a, ElemType *b) {
    ElemType temp = *a;
    *a = *b;
    *b = temp;
    return OK;
}

Status BubbleSort(ElemType *data, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (data[j] > data[j + 1]) {
                swap(&data[j], &data[j + 1]);
            }
        }
    }
    return OK;
}


int Partition(ElemType *data, int low, int high) {
    int pivot = data[low];

    while (low < high) {
        while (low < high && data[high] >= pivot) --high;
        data[low] = data[high];

        while (low < high && data[low] <= pivot) ++low;
        data[high] = data[low];
    }

    data[low] = pivot;
    return low;
}

Status QuickSort(ElemType *data, int low, int high) {
    if (low < high) {
        int pivotpos = Partition(data, low, high);
        QuickSort(data, low, pivotpos - 1);
        QuickSort(data, pivotpos + 1, high);
    }
    return OK;
}
