/* Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the 
destination file using fgetc() and fputc(). */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_ptr, *dest_ptr;
    char source_file[50], dest_file[50];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", source_file);

    printf("Enter the destination filename: ");
    scanf("%s", dest_file);

    source_ptr = fopen(source_file, "r");

    if (source_ptr == NULL) {
        printf("\nError: Could not open source file %s\n", source_file);
        return 1;
    }

    dest_ptr = fopen(dest_file, "w");

    if (dest_ptr == NULL) {
        printf("\nError: Could not create destination file %s\n", dest_file);
        fclose(source_ptr);
        return 1;
    }

    while ((ch = fgetc(source_ptr)) != EOF) {
        fputc(ch, dest_ptr);
    }

    printf("\nContents successfully copied from %s to %s.\n", source_file, dest_file);

    fclose(source_ptr);
    fclose(dest_ptr);

    return 0;
}