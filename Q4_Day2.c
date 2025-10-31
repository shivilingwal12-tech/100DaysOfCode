// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.1416

int main() {
    float r;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    printf("Circumference = %.2f\n", 2 * PI * r);
    return 0;
}

