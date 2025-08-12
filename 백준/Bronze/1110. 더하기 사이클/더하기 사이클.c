#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int original = n;
    int count = 0;

    do {
        int a = n / 10;      
        int b = n % 10;      
        int sum = (a + b) % 10;
        n = (b * 10) + sum;
        count++;
    } while (n != original);

    printf("%d\n", count);
    return 0;
}
