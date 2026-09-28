#include <stdio.h>

int main() {
    int number, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Not a perfect number\n");
        return 0;
    }

    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        printf("%d is a perfect number\n", number);
    } else {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}
