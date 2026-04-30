// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

enum Day {
    SUNDAY = 0,
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6
};

int main() {
    printf("Day\tValue\n");
    printf("SUNDAY\t%d\n", SUNDAY);
    printf("MONDAY\t%d\n", MONDAY);
    printf("TUESDAY\t%d\n", TUESDAY);
    printf("WEDNESDAY\t%d\n", WEDNESDAY);
    printf("THURSDAY\t%d\n", THURSDAY);
    printf("FRIDAY\t%d\n", FRIDAY);
    printf("SATURDAY\t%d\n", SATURDAY);

    return 0;
}