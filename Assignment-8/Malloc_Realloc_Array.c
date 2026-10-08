#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n, i;
    int *arr;

    printf("Enter the initial size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the new size: ");
    scanf("%d", &new_n);

    if (new_n < n) {
        printf("New size must be greater than the initial size\n");
        free(arr);
        return 0;
    }

    arr = (int *)realloc(arr, new_n * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter %d new elements: ", new_n - n);
    for (i = n; i < new_n; i++)
        scanf("%d", &arr[i]);

    printf("All elements: ");
    for (i = 0; i < new_n; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}
