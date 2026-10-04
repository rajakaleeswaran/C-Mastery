#include <stdio.h>

int main() {
    int n, i, max, min;
    int arr[100];
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    max = *ptr;
    min = *ptr;

    for (i = 1; i < n; i++) {
        ptr++;

        if (*ptr > max)
            max = *ptr;

        if (*ptr < min)
            min = *ptr;
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
