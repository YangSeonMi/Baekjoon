#include <stdio.h>


int main() {
    int arr[5];
    for(int i=0; i<5; i++) scanf("%d", &arr[i]);

    int a=0;
    for(int i=0; i<5; i++){
        a+= arr[i];
    }

    for (int i = 0; i < 4; i++) {
    int minIdx = i;
    for (int j = i + 1; j < 5; j++) {
        if (arr[j] < arr[minIdx]) {
            minIdx = j;
        }
    }

    int temp = arr[i];
    arr[i] = arr[minIdx];
    arr[minIdx] = temp;
    }
    
    printf("%d\n", a/5);
    printf("%d\n", arr[2]);
    return 0;
}