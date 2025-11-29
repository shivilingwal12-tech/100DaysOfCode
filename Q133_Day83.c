// Create an enum for months and print how many days each month has.

#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int get_days(enum Month month) {
    if (month == APRIL || month == JUNE || month == SEPTEMBER || month == NOVEMBER) {
        return 30;
    } else if (month == FEBRUARY) {
        return 28;
    } else {
        return 31;
    }
}

int main() {
    printf("Month\tDays\n");
    printf("January\t%d\n", get_days(JANUARY));
    printf("February\t%d\n", get_days(FEBRUARY));
    printf("March\t%d\n", get_days(MARCH));
    printf("April\t%d\n", get_days(APRIL));
    printf("May\t%d\n", get_days(MAY));
    printf("June\t%d\n", get_days(JUNE));
    printf("July\t%d\n", get_days(JULY));
    printf("August\t%d\n", get_days(AUGUST));
    printf("September\t%d\n", get_days(SEPTEMBER));
    printf("October\t%d\n", get_days(OCTOBER));
    printf("November\t%d\n", get_days(NOVEMBER));
    printf("December\t%d\n", get_days(DECEMBER));

    return 0;
}