// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // Note the space before %c to consume any leftover newline

    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result = %d\n", a / b); 
            else
                printf("Error: Division by zero!\n");
            break;
        case '%': 
            if (b != 0)
                printf("Result = %d\n", a % b); 
            else
                printf("Error: Modulo by zero!\n");
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
