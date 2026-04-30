// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    char *word_start = sentence;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            reverse_word(word_start, &sentence[i - 1]);
            word_start = &sentence[i + 1];
        }
        i++;
    }
    reverse_word(word_start, &sentence[i - 1]);

    printf("\nSentence with reversed words: %s\n", sentence);

    return 0;
}