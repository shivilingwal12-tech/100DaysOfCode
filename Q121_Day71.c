/* Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age 
as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was 
successfully saved. */

#include <stdio.h>

int main() {
    char name[50];
    int age;
    FILE *file_ptr;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    file_ptr = fopen("info.txt", "w");

    if (file_ptr == NULL) {
        printf("\nError opening file.\n");
        return 1;
    }

    fprintf(file_ptr, "Name: %sAge: %d\n", name, age);

    fclose(file_ptr);

    printf("\nData was successfully saved to info.txt.\n");

    return 0;
}