#include <stdio.h>

void name(long long a, long long b){
    long long sum=0, m=0;
    sum = a +b;
    m = a-b;
    printf("%lld", sum*m);
}

int main() {
    long long  A, B;
    scanf("%lld %lld", &A, &B);
    name(A, B);
    return 0;
}