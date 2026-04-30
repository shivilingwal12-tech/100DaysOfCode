// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Item *ptr;

    ptr = (struct Item *)malloc(sizeof(struct Item));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(ptr->name, "Hammer");
    ptr->id = 501;
    ptr->price = 15.99;

    printf("--- Dynamically Allocated Item Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Price: %.2f\n", ptr->price);

    free(ptr);

    return 0;
}