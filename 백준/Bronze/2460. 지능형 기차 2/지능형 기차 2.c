#include <stdio.h>

int main() {
    int sum=0, max=0;
    for(int i=0; i<=10; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        sum -=a;
        sum += b;
        if(sum>max) max=sum;
    }
    printf("%d", max);
    return 0;
}
 