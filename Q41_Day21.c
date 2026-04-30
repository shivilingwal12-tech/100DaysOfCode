// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 10) {
        printf("Number has only one digit, no swap needed: %d\n", num);
        return 0;
    }

    last = num % 10;
    digits = (int)log10(num);  // Number of digits - 1
    first = num / pow(10, digits);

    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
