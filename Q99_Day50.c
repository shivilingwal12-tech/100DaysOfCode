// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date_in[11];
    char month_str[4];
    int month_num;

    printf("Enter date in dd/mm/yyyy format (e.g., 05/04/2025): ");
    scanf("%10s", date_in);

    month_num = (date_in[3] - '0') * 10 + (date_in[4] - '0');

    switch (month_num) {
        case 1: strcpy(month_str, "Jan"); break;
        case 2: strcpy(month_str, "Feb"); break;
        case 3: strcpy(month_str, "Mar"); break;
        case 4: strcpy(month_str, "Apr"); break;
        case 5: strcpy(month_str, "May"); break;
        case 6: strcpy(month_str, "Jun"); break;
        case 7: strcpy(month_str, "Jul"); break;
        case 8: strcpy(month_str, "Aug"); break;
        case 9: strcpy(month_str, "Sep"); break;
        case 10: strcpy(month_str, "Oct"); break;
        case 11: strcpy(month_str, "Nov"); break;
        case 12: strcpy(month_str, "Dec"); break;
        default:
            printf("Invalid month in input date.\n");
            return 1;
    }

    printf("\nOriginal date: %s\n", date_in);
    printf("New date format: %c%c-%s-%c%c%c%c\n", 
           date_in[0], date_in[1], 
           month_str, 
           date_in[6], date_in[7], date_in[8], date_in[9]);

    return 0;
}