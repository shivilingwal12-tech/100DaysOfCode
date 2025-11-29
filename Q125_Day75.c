/* Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without 
overwriting existing content. */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file_ptr;
    char text_to_append[100];
    char filename[] = "new.txt";

    printf("Enter text to append to %s: ", filename);
    fgets(text_to_append, sizeof(text_to_append), stdin);
    
    if (text_to_append[strlen(text_to_append) - 1] == '\n') {
        text_to_append[strlen(text_to_append) - 1] = '\0';
    }

    file_ptr = fopen(filename, "a");

    if (file_ptr == NULL) {
        printf("\nError: Could not open file %s\n", filename);
        return 1;
    }

    fprintf(file_ptr, "\n%s", text_to_append);

    fclose(file_ptr);

    printf("\nText successfully appended to %s.\n", filename);

    return 0;
}