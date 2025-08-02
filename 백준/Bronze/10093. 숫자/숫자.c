#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    printf("%lld\n", (a == b) ? 0 : b - a - 1);

    for (long long i = a + 1; i < b; i++) {
        printf("%lld ", i);
    }

    printf("\n");
    return 0;
}
