#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    int sum = a + b + c;

    if (sum - max > max) {
        printf("%d\n", sum);
    } 
    else {
        printf("%d\n", 2 * (sum - max) - 1);
    }

    return 0;
}
