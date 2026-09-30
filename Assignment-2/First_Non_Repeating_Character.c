#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int frequency[256] = {0};
    int i, length, found = 0;

    printf("Enter a string: ");
    scanf("%999s", str);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    for (i = 0; i < length; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
