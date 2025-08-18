#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int i=1, count=0;
    while(i<=n){
        if(n%i==0){
            count++;
            if(count==k){
                printf("%d", i);
                return 0;
            }
        }
        i++;
    }

    printf("0");
    return 0;
}
