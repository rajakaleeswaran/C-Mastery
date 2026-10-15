#include <stdio.h>

int main() {
    int units;
    float bill = 0.0f;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Units cannot be negative\n");
        return 0;
    }

    if (units <= 100) {
        bill = units * 1.50f;
    } else if (units <= 200) {
        bill = 100 * 1.50f + (units - 100) * 2.50f;
    } else if (units <= 500) {
        bill = 100 * 1.50f + 100 * 2.50f + (units - 200) * 4.00f;
    } else {
        bill = 100 * 1.50f + 100 * 2.50f + 300 * 4.00f + (units - 500) * 6.00f;
    }

    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}
