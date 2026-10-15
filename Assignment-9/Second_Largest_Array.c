#include <stdio.h>

int main() {
    int n, i, value;
    int largest, secondLargest;
    int hasSecond = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Enter a size between 2 and 100\n");
        return 0;
    }

    printf("Enter the elements: ");
    scanf("%d", &largest);

    for (i = 1; i < n; i++) {
        scanf("%d", &value);

        if (value > largest) {
            secondLargest = largest;
            largest = value;
            hasSecond = 1;
        } else if (value < largest && (!hasSecond || value > secondLargest)) {
            secondLargest = value;
            hasSecond = 1;
        }
    }

    if (hasSecond)
        printf("Second-largest distinct element: %d\n", secondLargest);
    else
        printf("A second-largest distinct element does not exist\n");

    return 0;
}
