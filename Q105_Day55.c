/* Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the 
element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not 
necessarily the element that is present most number of times. */

#include <stdio.h>

int findMajorityElement(int nums[], int size) {
    int candidate = 0;
    int count = 0;
    int i;
    for (i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (i = 0; i < size; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > size / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums1[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int size1 = 9;
    
    int nums2[] = {1, 2, 3, 4};
    int size2 = 4;

    printf("Array 1: The majority element is: %d\n", findMajorityElement(nums1, size1));
    printf("Array 2: The majority element is: %d\n", findMajorityElement(nums2, size2));

    return 0;
}