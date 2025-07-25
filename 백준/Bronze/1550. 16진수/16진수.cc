#include <stdio.h>

int main() {
    char a[7];
    int len = 0, t = 0;
    scanf("%s", a);

    while (a[len] != '\0') len++;

    int mult = 1; 

    for (int i = len - 1; i >= 0; i--) {
        int num = 0;

        if (a[i] >= '0' && a[i] <= '9') {
            num = a[i] - '0';
        } else if (a[i] >= 'A' && a[i] <= 'F') {
            num = a[i] - 'A' + 10;
        }

        t += num * mult;
        mult *= 16;
    }

    printf("%d", t);
    return 0;
}
