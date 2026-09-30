#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[1000];
    int start = 0, maxLength = 1;
    int i, j, length;

    printf("Enter a string: ");
    scanf("%999s", str);

    length = strlen(str);

    if (length == 0) {
        printf("Longest palindromic substring: \n");
        return 0;
    }

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLength) {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    printf("Longest palindromic substring: ");
    for (i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
