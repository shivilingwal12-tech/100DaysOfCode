// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int current_len = 0;
    int max_len = 0;
    int i;
    int start_index = 0;
    int max_start_index = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            if (current_len > max_len) {
                max_len = current_len;
                max_start_index = start_index;
            }
            current_len = 0;
            start_index = i + 1;
        } else {
            current_len++;
        }
    }

    printf("\nLongest word: ");
    for (i = 0; i < max_len; i++) {
        printf("%c", sentence[max_start_index + i]);
    }
    printf("\nLength: %d\n", max_len);

    return 0;
}