// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Item myItem = {101, "Old Name", 50.00};
    struct Item *ptr = &myItem;

    printf("--- Original Data ---\n");
    printf("ID: %d\n", myItem.id);
    printf("Name: %s\n", myItem.name);
    printf("Price: %.2f\n", myItem.price);
    
    ptr->id = 202;
    strcpy(ptr->name, "New Name");
    ptr->price = 100.50;

    printf("\n--- Modified Data (using ->) ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}