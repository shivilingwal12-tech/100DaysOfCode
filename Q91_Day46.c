// Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

int is_vowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("\nString after removing vowels: %s", str);

    return 0;
}