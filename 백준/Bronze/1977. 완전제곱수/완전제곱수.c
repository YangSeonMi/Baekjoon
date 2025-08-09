#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int sum=0, min=10000;
    for(int i=m; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i/j==j && i%j==0){
                sum += i;
                if(min>i) min =i;
            }
        }
    }

    if(sum==0) printf("-1");
    else{
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    return 0;
}
