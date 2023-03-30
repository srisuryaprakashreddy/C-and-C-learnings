// Merge two sorted subarrays L and R into arr
#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int L[], int nL, int R[], int nR) {
    int i = 0, j = 0, k = 0;

    while (i < nL && j < nR) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nL) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < nR) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function to sort array using merge() function
void mergeSort(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int mid = n / 2;
    int L[mid], R[n - mid];

    for (int i = 0; i < mid; i++) {
        L[i] = arr[i];
    }

    for (int i = mid; i < n; i++) {
        R[i - mid] = arr[i];
    }

    mergeSort(L, mid);
    mergeSort(R, n - mid);
    merge(arr, L, mid, R, n - mid);
}
