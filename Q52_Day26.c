/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
  */

  #include <stdio.h>

int main() {
    printf("*\n\n");         // First block: 1 star
    
    printf("*\n*\n*\n\n");   // Second block: 3 stars
    
    printf("*\n*\n*\n*\n*\n\n"); // Third block: 5 stars
    
    printf("*\n*\n*\n\n");   // Fourth block: 3 stars
    
    printf("*\n");            // Last block: 1 star
    
    return 0;
}
