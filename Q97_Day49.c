// Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a full name (e.g., John David Smith): ");
    fgets(name, sizeof(name), stdin);
    printf("\nInitials: %c.", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }
    printf("\n");

    return 0;
}