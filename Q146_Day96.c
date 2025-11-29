// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>
#include <string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[50];
    struct Date joining_date;
};

int main() {
    struct Employee emp1;
    emp1.id = 101;
    strcpy(emp1.name, "Alice Smith");
    emp1.joining_date.day = 15;
    emp1.joining_date.month = 11;
    emp1.joining_date.year = 2023;
    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Joining Date: %d/%d/%d\n", emp1.joining_date.day, emp1.joining_date.month, emp1.joining_date.year);

    return 0;
}