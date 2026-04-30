// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Days {
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    NUM_DAYS // Marker to indicate the total number of enumerators
};

void print_enum(enum Days day) {
    switch(day) {
        case SUN: printf("SUN"); break;
        case MON: printf("MON"); break;
        case TUE: printf("TUE"); break;
        case WED: printf("WED"); break;
        case THU: printf("THU"); break;
        case FRI: printf("FRI"); break;
        case SAT: printf("SAT"); break;
        default: printf("INVALID"); break;
    }
}

int main() {
    enum Days day;
    
    printf("Enum Name\tValue\n");
    
    for (day = SUN; day < NUM_DAYS; day++) {
        print_enum(day);
        printf("\t\t%d\n", day);
    }
    
    return 0;
}