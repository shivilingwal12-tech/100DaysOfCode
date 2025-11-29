// Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[20];
    float price;
};

int are_identical(struct Item item1, struct Item item2) {
    if (item1.id != item2.id) {
        return 0; 
    }
    if (item1.price != item2.price) {
        return 0; 
    }
    if (strcmp(item1.name, item2.name) != 0) {
        return 0; 
    }
    return 1; 
}

int main() {
    struct Item a = {101, "Laptop", 1200.50};
    struct Item b = {101, "Laptop", 1200.50};
    struct Item c = {102, "Mouse", 25.00};
    if (are_identical(a, b)) {
        printf("Struct a and Struct b are IDENTICAL.\n");
    } else {
        printf("Struct a and Struct b are NOT identical.\n");
    }
    if (are_identical(a, c)) {
        printf("Struct a and Struct c are IDENTICAL.\n");
    } else {
        printf("Struct a and Struct c are NOT identical.\n");
    }

    return 0;
}