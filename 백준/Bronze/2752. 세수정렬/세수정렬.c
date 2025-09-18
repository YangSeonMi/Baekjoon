#include <stdio.h>

int main(){
    int numbers[3], i, j, tmp;
    for(i = 0; i < 3; i++){
        scanf("%d", &numbers[i]);
    }
    
    for(i = 0; i < 3-1; i++){
        for(j = i+1; j < 3; j++){
            if(numbers[i] > numbers[j]){
                tmp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmp;
            }
        }
    }
    
    for(i = 0; i < 3; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}