#include <stdio.h>

int main() {
    int N, v, sum=0;
    scanf("%d", &N);
    int arr[100]={0};

    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for (int j=0; j<N; j++){
        if (arr[j]==v){
            sum += 1;
        }
    }
    printf("%d", sum);
    return 0;
}