// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result;

    printf("Choose operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch ((enum Operation)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
    }

    return 0;
}