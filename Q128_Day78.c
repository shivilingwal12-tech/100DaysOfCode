/* Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. */

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file_ptr;
    char ch;
    int vowels = 0;
    int consonants = 0;
    char filename[] = "output.txt";

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("\nFile: %s\n", filename);
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    fclose(file_ptr);

    return 0;
}