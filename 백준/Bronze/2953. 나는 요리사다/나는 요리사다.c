#include <stdio.h>

int main() {
    int arr[5][4];
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum=0, max_index=0, max=1;

    for(int i=0; i<5; i++){
        sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        if(max<sum){
            max = sum;
            max_index = i;
        }
    }

    printf("%d %d", max_index+1, max);
    return 0;
}