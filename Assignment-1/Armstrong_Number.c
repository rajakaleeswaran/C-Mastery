#include <stdio.h>

int main() {
    int number, original, remainder, digits = 0, sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    original = number;

    if (number == 0) {
        digits = 1;
    } else {
        while (number != 0) {
            digits++;
            number /= 10;
        }
    }

    number = original;

    while (number != 0) {
        remainder = number % 10;
        power = 1;

        for (i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        number /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}
