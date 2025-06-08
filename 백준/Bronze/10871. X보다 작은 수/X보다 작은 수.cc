#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int A[N] = {0};

    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(int j=0; j<N; j++){
        if (X > A[j]){
            printf("%d ", A[j]);
        }
    }
    return 0;
}