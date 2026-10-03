#include <stdio.h>

int main() {
    int n1, n2, i, j, found;
    int arr1[100], arr2[100];

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Intersection: ");

    for (i = 0; i < n1; i++) {
        found = 0;

        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("%d ", arr1[i]);
            for (j = i + 1; j < n1; j++) {
                if (arr1[j] == arr1[i]) {
                    arr1[j] = arr1[n1 - 1];
                    n1--;
                    j--;
                }
            }
        }
    }

    return 0;
}
