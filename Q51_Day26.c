/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345  */

#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {             // Rows
        // Print leading spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }
        // Print numbers from i to n
        for(j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
