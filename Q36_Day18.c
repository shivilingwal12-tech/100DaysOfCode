// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int x = a, y = b;
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF (GCD) of %d and %d = %d\n", a, b, x);
    return 0;
}
