/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in 
the array. Print the kth smallest element as output. */

#include <stdio.h>

void sortArray(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = 6;
    int k = 3;
    int i;

    if (k < 1 || k > size) {
        printf("Invalid value of k.\n");
        return 1;
    }

    sortArray(arr, size);

    printf("Input Array: {7, 10, 4, 3, 20, 15}\n");
    printf("Value of k: %d\n", k);
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}