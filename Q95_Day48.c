// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char temp[200];
    int len1, len2;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    int is_rotation = 0;

    if (len1 != len2) {
        printf("\nResult: The strings are NOT rotations of each other (lengths differ).\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL) {
        is_rotation = 1;
    }

    if (is_rotation) {
        printf("\nResult: The strings are ROTATIONS of each other.\n");
    } else {
        printf("\nResult: The strings are NOT rotations of each other.\n");
    }

    return 0;
}