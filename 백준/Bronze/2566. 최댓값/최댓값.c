#include <stdio.h>

int main() {
    int arr[10][10];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max_ = arr[0][0];
    int max_index1 = 0;
    int max_index2 = 0;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[i][j]>max_){
                max_ = arr[i][j];
                max_index1 = i;
                max_index2 = j;
            }
        }
    }

    printf("%d\n", max_);
    printf("%d %d\n", max_index1+1, max_index2+1);
    return 0;
}