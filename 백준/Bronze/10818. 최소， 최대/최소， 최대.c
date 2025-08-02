#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int min_=arr[0];
    int max_=arr[0];
    for(int i=1; i<n; i++){
        if(min_>arr[i]) min_=arr[i];
    }
    for(int i=1; i<n; i++){
        if(max_<arr[i]) max_ = arr[i];
    }

    printf("%d %d", min_, max_);
    return 0;
}