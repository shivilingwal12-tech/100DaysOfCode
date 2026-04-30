/* Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and 
display each record. */

#include <stdio.h>

int main() {
    FILE *file_ptr;
    char name[50];
    int roll_number;
    float marks;
    int num_records = 2;
    int i;
    char filename[] = "student_records.txt";
    file_ptr = fopen(filename, "w");

    if (file_ptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter %d student records:\n", num_records);
    for (i = 0; i < num_records; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll_number);
        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(file_ptr, "%s %d %.2f\n", name, roll_number, marks);
    }

    fclose(file_ptr);
    printf("\nSuccessfully wrote %d records to %s.\n", num_records, filename);
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Stored Records ---\n");
    printf("Name\tRoll No.\tMarks\n");

    while (fscanf(file_ptr, "%s %d %f", name, &roll_number, &marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", name, roll_number, marks);
    }

    fclose(file_ptr);

    return 0;
}