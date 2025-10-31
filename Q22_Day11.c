// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, amount;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);

    if (sp > cp) {
        amount = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", amount);
    } else if (cp > sp) {
        amount = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", amount);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
