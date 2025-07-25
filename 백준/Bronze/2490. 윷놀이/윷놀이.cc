#include <stdio.h>

int main() {
    int arr[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        int find_1=0;
        for(int j=0; j<4; j++){
            if (arr[i][j]==0) find_1++;
        }
        if(find_1==1) printf("A\n");
        else if (find_1==2) printf("B\n");
        else if(find_1==3) printf("C\n");
        else if(find_1==4) printf("D\n");
        else if(find_1==0) printf("E\n");
    }
    return 0;
}