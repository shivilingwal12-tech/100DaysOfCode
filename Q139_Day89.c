// Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Color {
    RED,         
    GREEN = 5,   
    BLUE         
};

int main() {
    enum Color c1 = RED;
    enum Color c2 = GREEN;
    enum Color c3 = BLUE;

    printf("RED value: %d\n", c1);
    printf("GREEN value: %d\n", c2);
    printf("BLUE value: %d\n", c3);

    return 0;
}