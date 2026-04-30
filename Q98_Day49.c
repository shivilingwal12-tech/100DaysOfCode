// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last_space_index = -1;

    printf("Enter a full name (e.g., John David Smith): ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space_index = i;
        }
    }
    for (i = 0; i < last_space_index; i++) {
        if (i == 0 || name[i-1] == ' ') {
            printf("%c.", name[i]);
        }
    }

    if (last_space_index != -1) {
        printf(" %s\n", &name[last_space_index + 1]);
    } else {
        printf("\nFull Name: %s\n", name);
    }

    return 0;
}