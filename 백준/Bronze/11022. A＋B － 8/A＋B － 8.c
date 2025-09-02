#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int c=0;
    while(n!=0){
        int a, b;
        scanf("%d %d", &a, &b);

        c++;
        printf("Case #%d: %d + %d = %d\n", c, a, b, a+b);
        n--;
    }
    return 0;
}