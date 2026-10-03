#include <stdio.h>

int main() {
    int n, i, j = 0, temp;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros to the end: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
