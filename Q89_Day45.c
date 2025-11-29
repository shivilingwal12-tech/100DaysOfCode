// Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100];
    char target_char;
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &target_char);

    while (str[i] != '\0') {
        if (str[i] == target_char) {
            count++;
        }
        i++;
    }

    printf("\nCharacter '%c' appears %d times in the string.\n", target_char, count);

    return 0;
}