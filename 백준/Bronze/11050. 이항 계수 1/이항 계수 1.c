#include <stdio.h>


int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int nsum=1;
    for(int i=1; i<=n; i++){
        nsum *= i;
    }
    int ksum=1;
    for(int i=1; i<=k; i++){
        ksum *= i;
    }

    int m = n-k;
    int msum=1;
    for(int i=1; i<=m; i++){
        msum *= i;
    }

    int km = ksum*msum;

    printf("%d", nsum/km);
    return 0;
}