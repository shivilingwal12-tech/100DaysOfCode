/* Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
Print that missing number. */

#include <stdio.h>

int main() {
    int nums[] = {3, 0, 1};
    int n = 3;
    int size = 3;
    int i;
    int expected_sum;
    int actual_sum = 0;
    int missing_number;
    expected_sum = n * (n + 1) / 2;
    for (i = 0; i < size; i++) {
        actual_sum += nums[i];
    }
    missing_number = expected_sum - actual_sum;

    printf("Input Array: {3, 0, 1} (n=%d)\n", n);
    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}