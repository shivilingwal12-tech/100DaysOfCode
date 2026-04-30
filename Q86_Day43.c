// Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    printf("\nOriginal string: %s\n", str);

    if (is_palindrome) {
        printf("Result: The string is a PALINDROME.\n");
    } else {
        printf("Result: The string is NOT a palindrome.\n");
    }

    return 0;
}