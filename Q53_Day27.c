/* Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows in the top half (maximum stars = 2*n - 1)

    // Top half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
