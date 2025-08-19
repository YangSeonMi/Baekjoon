#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    long long sum=0;
    for(int i=0; i<n; i++){
        sum += (i*n+i);
    }
    printf("%lld", sum);
    return 0;
}
 