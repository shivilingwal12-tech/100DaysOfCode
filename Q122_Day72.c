/* Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should 
print all the lines to the console until EOF (end of file) is reached. */

#include <stdio.h>

int main() {
    FILE *file_ptr;
    char buffer[100];

    file_ptr = fopen("info.txt", "r");

    if (file_ptr == NULL) {
        printf("Error: File 'info.txt' not found or cannot be opened.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr);

    return 0;
}