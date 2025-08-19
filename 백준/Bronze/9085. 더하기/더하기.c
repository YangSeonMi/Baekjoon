#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int t;
        scanf("%d", &t);
        int a, sum=0;
        for(int j=0; j<t; j++){
            scanf("%d", &a);
            sum+=a;
        }
        printf("%d\n", sum);
    }
    return 0;
}
 