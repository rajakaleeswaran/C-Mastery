#include <stdio.h>

int main() {
    int limit, number, temp, digit, digits, i;
    long long sum, power;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    if (limit < 1) {
        printf("Limit must be at least 1\n");
        return 0;
    }

    printf("Armstrong numbers between 1 and %d: ", limit);

    for (number = 1; number <= limit; number++) {
        temp = number;
        digits = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = number;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            power = 1;

            for (i = 0; i < digits; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == number)
            printf("%d ", number);
    }

    printf("\n");

    return 0;
}
