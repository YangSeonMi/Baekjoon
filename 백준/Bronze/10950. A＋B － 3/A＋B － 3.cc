#include <stdio.h>

int main() {
    int T,a,b;
    int sum=0;
    scanf("%d", &T);

    while(T>0){
        scanf("%d %d", &a, &b);
        sum = a+b;
        printf("%d\n", sum);
        T--;
    }
    return 0;
}