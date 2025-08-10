#include <time.h>
#include <stdio.h>
#include "sort/sort.h"

static void print_array(const char *msg, ElemType data[], int n) {
    printf("%s", msg);
    for (int i = 1; i <= n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    ElemType data[] = {0, 9, 1, 5, 8, 3, 7, 4, 6, 2};
    int n = 9;

    clock_t start, end;
    double duration;

    print_array("pre sort: ", data, n);

    start = clock();
    // InsertionSort(data, n);
    // BinaryInsertionSort(data, n);
    // ShellSort(data, n);
    // ShellSort2(data, n);
    // BubbleSort(data, n);
    // QuickSort(data, 1, n);
    QuickSortBFS(data, n);
    end = clock();

    duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", duration);

    print_array("post sort: ", data, n);

    

    return 0;
}
