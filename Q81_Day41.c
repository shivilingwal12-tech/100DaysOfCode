// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("\nThe string is: %s\n", str);
    printf("Total number of characters (length): %d\n", count);

    return 0;
}