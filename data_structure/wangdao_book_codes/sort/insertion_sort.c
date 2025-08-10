#include <stddef.h>

#include "sort.h"
#include "types.h"
#include "status.h"


Status InsertionSort(ElemType *data, int n) {

    int i = 0;
    int j = 0;

    for (i = 2; i <= n; i++) {

        // if the current element is less than the previous one,
        // then we need to insert it into the right place.
        // we need to find the right place first.
        if (data[i] < data[i - 1]) {
            data[0] = data[i];
            for (j = i - 1; data[0] < data[j]; j--) {
                data[j + 1] = data[j];
            }
            data[j + 1] = data[0];
        }
    }

    return OK;
}

Status BinaryInsertionSort(ElemType *data, int n) {
    int i = 0;
    int j = 0;
    int low = 0;
    int mid = 0;
    int high = 0;

    for (i = 2; i <= n; i++) {
        data[0] = data[i];
        low = 1;
        high = i - 1;

        // Key point, low > high
        while (low <= high) {
            mid = (low + high) / 2;
            if (data[mid] > data[0]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        for (j = i - 1; j>= high + 1; j--) {
            data[j + 1] = data[j];
        }
        data[high + 1] = data[0];
    }

    return OK;
}

Status ShellSort(ElemType *data, int n) {

    int dk = 0;
    int i = 0;
    int j = 0;

    for (dk = n/2; dk >= 1; dk /= 2) {
        for (i = dk + 1; i <= n; i++) {
            if (data[i] < data[i - dk]) {
                data[0] = data[i];
                // compare with its previous element.
                // if the current element is less than the previous one,
                // then we need to insert it into the right place.
                // we need to find the right place first.
                for (j = i - dk; j > 0 && data[0] < data[j]; j -= dk) {
                    data[j + dk] = data[j];
                }
                data[j + dk] = data[0];
            }
        }
    }


    return OK;
}

Status ShellSort2(ElemType *data, int n) {

    int temp = 0;
    int j = 0;

    for (int r = n / 2; r > 0; r /= 2) {
        
        for (int i = r; i < n; i++) {
            temp = data[i];
            j = i - r;

            while (j >= 0 && temp < data[j]) {
                data[j + r] = data[j];
                j -= r;
            }

            data[j + r] = temp;
        }   
    }

    return OK;
}
