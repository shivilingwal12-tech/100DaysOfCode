// Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, original, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }

    if(sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}

