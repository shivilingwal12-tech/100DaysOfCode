// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Book {
    char title[50];
    int pages;
    float price;
};

void printBook(struct Book book) {
    printf("Book Title: %s\n", book.title);
    printf("Pages: %d\n", book.pages);
    printf("Price: %.2f\n", book.price);
}

int main() {
    struct Book myBook;
    
    printf("Enter book title: ");
    scanf("%s", myBook.title);
    
    printf("Enter number of pages: ");
    scanf("%d", &myBook.pages);
    
    printf("Enter price: ");
    scanf("%f", &myBook.price);

    printf("\n--- Printing Data via Function ---\n");
    printBook(myBook);

    return 0;
}