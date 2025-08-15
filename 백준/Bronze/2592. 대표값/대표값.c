#include <stdio.h>


int main() {
    int arr[10], sum=0, k=0;

    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        sum +=arr[i];
    }

    int m, max=0;
    for(int i=0; i<10; i++){
        int count=0;
        for(int j=0; j<10; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max = count;
            m = arr[i];
        }
    }

    printf("%d\n", sum/10);
    printf("%d\n", m);
    
    return 0;
}