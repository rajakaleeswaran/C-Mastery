#include <stdio.h>

int reverseNumber(int number, int reversed) {
    if (number == 0) {
        return reversed;
    }

    return reverseNumber(number / 10, reversed * 10 + number % 10);
}

int main() {
    int number, reversed;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    reversed = reverseNumber(number, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
