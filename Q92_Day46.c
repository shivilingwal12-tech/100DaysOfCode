// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[26] = {0};
    char first_repeater = '\0';
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (count[str[i] - 'a'] > 1) {
                first_repeater = str[i];
                break;
            }
        }
    }

    if (first_repeater != '\0') {
        printf("\nFirst repeating lowercase alphabet: %c\n", first_repeater);
    } else {
        printf("\nNo repeating lowercase alphabet found.\n");
    }

    return 0;
}