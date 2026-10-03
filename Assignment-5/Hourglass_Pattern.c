#include <stdio.h>

int main() {
    int n, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i -= 2) {
        spaces = (n - i) / 2;

        for (j = 0; j < spaces; j++)
            printf(" ");

        for (j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    for (i = 3; i <= n; i += 2) {
        spaces = (n - i) / 2;

        for (j = 0; j < spaces; j++)
            printf(" ");

        for (j = 0; j < i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
