// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int size = 5;
    int i;
    int max_index = 0;

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


    for (i = 1; i < size; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll Number: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);

    return 0;
}