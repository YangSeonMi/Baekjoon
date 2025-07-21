#include <stdio.h>

int main(){
    int w=0;
    char arr[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            scanf(" %c", &arr[i][j]);
        }
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if (i%2==0){
                if (j%2==0){
                    if (arr[i][j] == 'F')
                        w+=1;
                }
            }
            else if(i%2 == 1){
                if (j%2!=0) {
                    if (arr[i][j] == 'F')
                        w+=1;
                }
            }
        }
    }
    printf("%d", w);
    return 0;
}