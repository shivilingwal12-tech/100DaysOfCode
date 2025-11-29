/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each 
element of the array in order of their appearance in the array. Previous greater element of an element in the array is the 
nearest element on the left which is greater than the current element. If there does not exist next greater of current 
element, then previous greater element for current element is -1. */

#include <stdio.h>

void findPreviousGreaterElement(int arr[], int size) {
    int previous_greater[100];
    int i, j;
    int previous_val;

    for (i = 0; i < size; i++) {
        previous_val = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_val = arr[j];
                break;
            }
        }
        previous_greater[i] = previous_val;
    }

    printf("Previous greater elements (comma separated): ");
    for (i = 0; i < size; i++) {
        printf("%d", previous_greater[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 5, 2, 25, 10, 8};
    int size = 6;
    
    printf("Input Array: {4, 5, 2, 25, 10, 8}\n");
    findPreviousGreaterElement(arr, size);

    int arr2[] = {13, 7, 6, 12};
    size = 4;
    printf("Input Array: {13, 7, 6, 12}\n");
    findPreviousGreaterElement(arr2, size);

    return 0;
}