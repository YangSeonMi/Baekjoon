#include <stdio.h>

int main() {
    int arr[4][2];

    for(int i=0; i<4; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    int sum=0, max=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            if(j==0){
                sum -= arr[i][j];
                if(sum>max){
                    max = sum;
                }
            }
            else if(j==1){
                sum += arr[i][j];
                if(sum>max){
                    max = sum;
                }
            }
        }
    }

    printf("%d", max);
    return 0;
}


