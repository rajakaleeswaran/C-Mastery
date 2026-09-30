#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int seen[256] = {0};
    int i, length;

    printf("Enter a string: ");
    scanf("%999s", str);

    length = strlen(str);

    printf("String after removing duplicates: ");

    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (!seen[ch]) {
            printf("%c", str[i]);
            seen[ch] = 1;
        }
    }

    printf("\n");

    return 0;
}
