#include <stdio.h>

int main(){
    int arr[10];
    int r[42] = {0};
    int count=0;

    for(int i=0; i<10;i++){
        scanf("%d", &arr[i]);
        int m= arr[i] % 42;
        r[m] = 1;
    }

    for(int i=0; i<42; i++){
        if(r[i]==1) count++;
    }

    printf("%d", count);
    return 0;
}