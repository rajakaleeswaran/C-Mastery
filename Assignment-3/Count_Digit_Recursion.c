#include <stdio.h>

int countDigit(int number, int digit) {
    if (number == 0) {
        return 0;
    }

    return (number % 10 == digit) + countDigit(number / 10, digit);
}

int main() {
    int number, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    if (number == 0 && digit == 0) {
        count = 1;
    } else {
        count = countDigit(number, digit);
    }

    printf("The digit %d occurs %d time(s)\n", digit, count);

    return 0;
}
