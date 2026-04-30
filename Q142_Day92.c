// Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    int size = 5;

    printf("Enter details for 5 students:\n");
    for (i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Stored Student Data ---\n");
    printf("Roll No\tName\tMarks\n");
    for (i = 0; i < size; i++) {
        printf("%d\t%s\t%.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}