/* Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space 
characters separated by spaces or newlines. */

#include <stdio.h>

int main() {
    FILE *file_ptr;
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int is_word = 0;

    file_ptr = fopen("info.txt", "r");

    if (file_ptr == NULL) {
        printf("Error: File 'input.txt' not found or cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }
    
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            is_word = 0;
        } else if (is_word == 0) {
            is_word = 1;
            word_count++;
        }
    }
    if (char_count > 0 && ch != '\n') {
        line_count++;
    }

    fclose(file_ptr);

    printf("Total characters: %d\n", char_count);
    printf("Total words: %d\n", word_count);
    printf("Total lines: %d\n", line_count);

    return 0;
}