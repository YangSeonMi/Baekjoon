#include <stdio.h>


int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    int temp;
    int max_index;
    for(int i=0; i<n; i++){
        max_index = i;
        for(int j=i; j<n; j++){
            if(arr[j]>arr[max_index]){
                max_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }

    printf("%d", arr[k-1]);
    return 0;
}
