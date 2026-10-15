#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer\n");
        return 0;
    }

    original = n;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Reverse of the number: %d\n", reverse);

    if (original == reverse)
        printf("%d is a palindrome number\n", original);
    else
        printf("%d is not a palindrome number\n", original);

    return 0;
}
