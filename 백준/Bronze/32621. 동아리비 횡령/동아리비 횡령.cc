#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int plus_pos = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '+') {
            if (plus_pos != -1) {
                printf("No Money");
                return 0;
            }
            plus_pos = i;
        }
    }

    if (plus_pos == -1) {
        printf("No Money");
        return 0;
    }

    s[plus_pos] = '\0';
    char* left = s;
    char* right = s + plus_pos + 1;

    if (left[0] == '0' || right[0] == '0' || strlen(left) == 0 || strlen(right) == 0) {
        printf("No Money");
        return 0;
    }

    for (int i = 0; left[i]; i++) {
        if (left[i] < '0' || left[i] > '9') {
            printf("No Money");
            return 0;
        }
    }
    for (int i = 0; right[i]; i++) {
        if (right[i] < '0' || right[i] > '9') {
            printf("No Money");
            return 0;
        }
    }

    if (strcmp(left, right) == 0) printf("CUTE");
    else printf("No Money");

    return 0;
}
