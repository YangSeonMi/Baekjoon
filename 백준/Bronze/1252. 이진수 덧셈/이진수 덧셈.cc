#include <stdio.h>

int main() {
    char arr1[81], arr2[81], result[82];
    int len1 = 0, len2 = 0;
    int carry = 0, i, idx = 0;

    scanf("%s %s", arr1, arr2);

    while (arr1[len1] != '\0') len1++;
    while (arr2[len2] != '\0') len2++;

    int pos1 = len1 - 1;
    int pos2 = len2 - 1;

    while (pos1 >= 0 || pos2 >= 0 || carry) {
        int a = (pos1 >= 0) ? arr1[pos1] - '0' : 0;
        int b = (pos2 >= 0) ? arr2[pos2] - '0' : 0;
        int sum = a + b + carry;
        result[idx++] = (sum % 2) + '0';
        carry = sum / 2;
        pos1--;
        pos2--;
    }

    int started = 0;
    for (i = idx - 1; i >= 0; i--) {
        if (!started && result[i] == '0') continue;
        started = 1;
        putchar(result[i]);
    }

    if (!started) putchar('0');
    putchar('\n');

    return 0;
}
