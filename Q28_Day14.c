// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long product = 1; // Use long long to handle large products
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    return 0;
}
