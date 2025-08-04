#include <stdio.h>

int main() {
    int arr[7];
    for(int i=0; i<7; i++){
        scanf("%d", &arr[i]);
    }

    int a=0;
    for(int i=0; i<7; i++){
        if(arr[i]%2!=0) a=1;
    }
    int sum=0;
    int min_=1000;
    for(int i=0; i<7; i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
            if(arr[i]<min_) min_=arr[i];
        }
    }

    if(a==0) printf("-1");
    else{
        printf("%d\n", sum);
        printf("%d\n", min_);
    }
    return 0;
}