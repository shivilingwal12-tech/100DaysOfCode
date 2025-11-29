/* Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all 
the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. */

#include <stdio.h>

void productExceptSelf(int nums[], int size) {
    long long answer[100];
    int i;
    long long prefix_product = 1;
    long long suffix_product = 1;

    
    for (i = 0; i < size; i++) {
        answer[i] = prefix_product;
        prefix_product *= nums[i];
    }

    
    for (i = size - 1; i >= 0; i--) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }
    
    printf("Result array (Product Except Self): ");
    for (i = 0; i < size; i++) {
        printf("%lld", answer[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = 4;
    
    printf("Input Array: {1, 2, 3, 4}\n");
    productExceptSelf(nums, size);
    
    int nums2[] = {-1, 1, 0, -3, 3};
    size = 5;
    
    printf("Input Array: {-1, 1, 0, -3, 3}\n");
    productExceptSelf(nums2, size);

    return 0;
}