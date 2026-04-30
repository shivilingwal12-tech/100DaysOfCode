// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, rem, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) num = -num; // Handle negative numbers

    while(num != 0) {
        rem = num % 10;
        if(rem % 2 != 0) {  // Check if the digit is odd
            product *= rem;
            hasOdd = 1;
        }
        num /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits in the number.\n");

    return 0;
}
