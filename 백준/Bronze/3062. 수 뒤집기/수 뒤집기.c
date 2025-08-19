#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i++] != s[j--]) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[10]; 
        scanf("%s", s);

        char rev[10];
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            rev[i] = s[len - 1 - i];
        }
        rev[len] = '\0';

        int num = atoi(s);
        int rnum = atoi(rev);
        int sum = num + rnum;

        char buf[20];
        sprintf(buf, "%d", sum);
        printf(is_palindrome(buf) ? "YES\n" : "NO\n");
    }

    return 0;
}
