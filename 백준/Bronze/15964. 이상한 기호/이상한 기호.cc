#include <stdio.h>

long long a(int a, int b){
    return (a+b)*(a-b);
}

int main() {
    long long n1, n2;
    scanf("%lld %lld", &n1, &n2);
    printf("%lld\n", a(n1, n2));
    return 0;
}