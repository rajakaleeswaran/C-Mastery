#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;
    int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer\n");
        return 0;
    }

    original = n;

    do {
        digit = n % 10;
        sum += factorial[digit];
        n /= 10;
    } while (n > 0);

    if (sum == original)
        printf("%d is a strong number\n", original);
    else
        printf("%d is not a strong number\n", original);

    return 0;
}
