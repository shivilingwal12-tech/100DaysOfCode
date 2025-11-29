/* Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array 
might be repeated. You need to print the first and last occurrence of the target and print the index of first and last 
occurrence. Print -1, -1 if the target is not present. */

#include <stdio.h>

int findFirst(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLast(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[] = {2, 5, 5, 5, 6, 6, 8, 9};
    int target = 5;
    int size = 8;
    int first_index, last_index;

    first_index = findFirst(nums, size, target);
    last_index = findLast(nums, size, target);

    printf("Target: %d\n", target);

    if (first_index != -1) {
        printf("First occurrence index: %d\n", first_index);
        printf("Last occurrence index: %d\n", last_index);
    } else {
        printf("-1\n");
    }

    return 0;
}