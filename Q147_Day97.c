// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp_write = {101, "John Doe", 65000.00};
    struct Employee emp_read;
    FILE *file_ptr;
    char filename[] = "employee.bin";

    file_ptr = fopen(filename, "wb");

    if (file_ptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&emp_write, sizeof(struct Employee), 1, file_ptr);
    fclose(file_ptr);

    printf("Employee record stored in %s.\n", filename);

    file_ptr = fopen(filename, "rb");

    if (file_ptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fread(&emp_read, sizeof(struct Employee), 1, file_ptr);
    fclose(file_ptr);

    printf("\n--- Read Employee Data ---\n");
    printf("ID: %d\n", emp_read.id);
    printf("Name: %s\n", emp_read.name);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}