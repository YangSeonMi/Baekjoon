#include <stdio.h>

int main() {
    int total=0;
    int arr[5];
    for (int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<5;i++){
        total += arr[i]*arr[i];
    }
    printf("%d", total%10);
    return 0;
}