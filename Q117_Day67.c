/* Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is 
also sorted. Print the merged array. */

#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n) {
    int merged[200];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("\nMerged Array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if (i < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 5, 8, 12};
    int m = 4;
    int arr2[] = {2, 4, 9, 10, 15};
    int n = 5;

    printf("Array 1: {1, 5, 8, 12}\n");
    printf("Array 2: {2, 4, 9, 10, 15}\n");
    mergeSortedArrays(arr1, m, arr2, n);

    return 0;
}