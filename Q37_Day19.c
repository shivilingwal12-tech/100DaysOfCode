// write a program to find the LCM of two numbers.
 
#include <stdio.h>

int main() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b; // Start from the larger number
    while(1) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}
