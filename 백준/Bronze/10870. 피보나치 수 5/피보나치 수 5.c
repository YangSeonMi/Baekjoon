#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum=0, a=0, b=1;
    for(int i=1; i<=n; ++i){
        sum = a+b;
        a = b;
        b = sum;
    }
    printf("%d", a);
    return 0;
}