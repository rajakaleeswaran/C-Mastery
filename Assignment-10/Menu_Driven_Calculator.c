#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    int choice, intA, intB;
    double a, b;

    do {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);

            if (choice == 1)
                printf("Result: %.2f\n", add(a, b));
            else if (choice == 2)
                printf("Result: %.2f\n", subtract(a, b));
            else if (choice == 3)
                printf("Result: %.2f\n", multiply(a, b));
            else if (choice == 4) {
                if (b == 0)
                    printf("Division by zero is not allowed\n");
                else
                    printf("Result: %.2f\n", divide(a, b));
            }
        } else if (choice == 5) {
            printf("Enter two integers: ");
            scanf("%d %d", &intA, &intB);

            if (intB == 0)
                printf("Modulus by zero is not allowed\n");
            else
                printf("Result: %d\n", modulus(intA, intB));
        } else if (choice != 0) {
            printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
