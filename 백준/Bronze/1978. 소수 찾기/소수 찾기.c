#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int c=0;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=2; j<=arr[i]; j++){
            if(arr[i]%j==0) count++;
        }
        if(count==1) c++;
    }

    printf("%d", c);
    return 0;
}