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

    print_array("pre sort: ", data, n);

    // InsertionSort(data, n);
    // BinaryInsertionSort(data, n);
    // ShellSort(data, n);
    ShellSort2(data, n);

    print_array("post sort: ", data, n);

    

    return 0;
}