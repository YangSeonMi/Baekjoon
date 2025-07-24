#include <stdio.h>

int main() {
    int n, score=0, h=0;
    scanf("%d", &n);
    int an[n];
    for(int i=0; i<n; i++){
        scanf("%d", &an[i]);
    }

    int s=1;
    for(int i=0; i<n; i++){
        if(an[i]!=1){
            s=1;
        }
        else{
            score += s;
            s++;
        }
    }
    printf("%d", score);
    return 0;
}