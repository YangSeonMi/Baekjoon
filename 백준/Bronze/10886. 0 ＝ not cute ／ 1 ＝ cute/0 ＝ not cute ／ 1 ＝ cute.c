#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count_0=0, count_1=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count_0++;
        }
        else if(arr[i]==1){
            count_1++;
        }
    }

    if(count_0<count_1){
        printf("Junhee is cute!");
    }
    else if(count_0>count_1){
        printf("Junhee is not cute!");
    }
    return 0;
}