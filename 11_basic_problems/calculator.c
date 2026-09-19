#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {

    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n===== CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Result = %d\n", add(a, b));
            break;

        case 2:
            printf("Result = %d\n", subtract(a, b));
            break;

        case 3:
            printf("Result = %d\n", multiply(a, b));
            break;

        case 4:
            if (b != 0) {
                printf("Result = %.2f\n", divide(a, b));
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
