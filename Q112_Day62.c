/* Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray 
using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) 
element. */

#include <stdio.h>

int maxSubarraySum(int arr[], int size) {
    int max_so_far;
    int current_max;
    int i;
    
    if (size == 0) {
        return 0;
    }
    max_so_far = arr[0];
    current_max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    return max_so_far;
}

int main() {
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = 9;
    int arr2[] = {-2, -3, -1, -5};
    int size2 = 4;

    printf("Array: {-2, 1, -3, 4, -1, 2, 1, -5, 4}\n");
    printf("Maximum subarray sum: %d\n", maxSubarraySum(arr1, size1));
    
    printf("Array: {-2, -3, -1, -5}\n");
    printf("Maximum subarray sum: %d\n", maxSubarraySum(arr2, size2));

    return 0;
}