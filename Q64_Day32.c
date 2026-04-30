// Find the digit that occurs the most times in an integer number.
 
#include <stdio.h>

int main() {
    long num, temp;
    int count[10] = {0}; // To store count of digits 0-9
    int i, maxCount = 0, mostFrequentDigit = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(num < 0) num = -num; // Handle negative numbers
    temp = num;

    // Count frequency of each digit
    while(temp != 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most frequently is %d (occurs %d times).\n", mostFrequentDigit, maxCount);

    return 0;
}
