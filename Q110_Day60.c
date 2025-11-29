/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each 
subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. */

#include <stdio.h>

void maxOfSubarrays(int arr[], int size, int k) {
    int i, j;
    int max_val;

    if (k <= 0 || k > size) {
        printf("Invalid value of k.\n");
        return;
    }
    
    for (i = 0; i <= size - k; i++) {
        max_val = arr[i];

        for (j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        
        printf("%d", max_val);
        if (i < size - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int size = 8;
    int k = 3;
    
    printf("Input Array: {1, 3, -1, -3, 5, 3, 6, 7}\n");
    printf("Subarray size (k): %d\n", k);
    printf("Maximum elements for each window: ");
    maxOfSubarrays(arr, size, k);

    return 0;
}