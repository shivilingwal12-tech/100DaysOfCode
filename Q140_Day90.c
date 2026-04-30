// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

void print_gender(enum Gender g) {
    if (g == MALE) {
        printf("Male\n");
    } else if (g == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }
}

int main() {
    struct Person p1;
    
    printf("Enter person's name: ");
    scanf("%s", p1.name);
    
    p1.gender = FEMALE;

    printf("\nName: %s\n", p1.name);
    printf("Gender: ");
    print_gender(p1.gender);

    return 0;
}