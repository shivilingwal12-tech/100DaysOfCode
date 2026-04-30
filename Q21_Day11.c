// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main() 
{
    int month, year;
    int days;
    const char* monthName;

    printf("Enter month number (1-12): ");
    if (scanf("%d", &month) != 1) 
    {
        printf("Invalid input. Please enter a valid integer for month.\n");
        return 1;
    }

    printf("Enter year (e.g., 2025): ");
    if (scanf("%d", &year) != 1) 
    {
        printf("Invalid input. Please enter a valid integer for year.\n");
        return 1;
    }

    switch (month) 
    {
        case 1:  monthName = "January";   days = 31; break;
        case 2:  monthName = "February";
                 // Leap year logic: divisible by 4, but not by 100 unless also by 400
                 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                     days = 29;
                 else
                     days = 28;
                 break;
        case 3:  monthName = "March";      days = 31; break;
        case 4:  monthName = "April";      days = 30; break;
        case 5:  monthName = "May";        days = 31; break;
        case 6:  monthName = "June";       days = 30; break;
        case 7:  monthName = "July";       days = 31; break;
        case 8:  monthName = "August";     days = 31; break;
        case 9:  monthName = "September";  days = 30; break;
        case 10: monthName = "October";    days = 31; break;
        case 11: monthName = "November";   days = 30; break;
        case 12: monthName = "December";   days = 31; break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            return 1;
    }

    printf("%s, %d has %d days.\n", monthName, year, days);
    return 0;
}