/* Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to 
output.txt. */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_ptr, *output_ptr;
    char ch;
    char input_filename[] = "new.txt";
    char output_filename[] = "output.txt";

    input_ptr = fopen(input_filename, "r");

    if (input_ptr == NULL) {
        printf("Error: Could not open source file '%s'.\n", input_filename);
        return 1;
    }

    output_ptr = fopen(output_filename, "w");

    if (output_ptr == NULL) {
        printf("Error: Could not create destination file '%s'.\n", output_filename);
        fclose(input_ptr);
        return 1;
    }

    while ((ch = fgetc(input_ptr)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, output_ptr);
    }

    printf("Content successfully converted to uppercase and written to '%s'.\n", output_filename);

    fclose(input_ptr);
    fclose(output_ptr);

    return 0;
}