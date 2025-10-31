/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *  */

    #include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = n; i >= 1; i--) {          // Rows
        for(j = 1; j <= n - i; j++)    // Print leading spaces
            printf(" ");
        for(j = 1; j <= i; j++)        // Print stars
            printf("*");
        printf("\n");
    }

    return 0;
}
