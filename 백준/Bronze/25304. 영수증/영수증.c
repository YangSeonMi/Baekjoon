#include <stdio.h>

int main() {
    long long t;
    scanf("%lld", &t);

    int n;
    scanf("%d", &n);
    long long a;
    int b;

    int sum=0;
    while(n!=0){
        scanf("%lld %d", &a, &b);

        int tt=a*b;
        sum+=tt;
        n--;
    }

    if(sum==t){
        printf("Yes");
    }
    else printf("No");
    return 0;
}