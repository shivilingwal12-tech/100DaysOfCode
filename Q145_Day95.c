// Return a structure containing top student's details from a function.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student find_top_student(char n[], int r, float m) {
    struct Student top_student;
    strcpy(top_student.name, n);
    top_student.roll_no = r;
    top_student.marks = m;
    
    return top_student;
}

int main() {
    struct Student result_student;
    result_student = find_top_student("Alice", 101, 95.5);

    printf("--- Top Student Details ---\n");
    printf("Name: %s\n", result_student.name);
    printf("Roll Number: %d\n", result_student.roll_no);
    printf("Marks: %.2f\n", result_student.marks);

    return 0;
}