#include <stdio.h>

int main(){
    int m, n; 
    scanf("%d %d", &m, &n);
    
    for(int i=m; i<=n; i++){
        if(i<2) continue;
        
        int p = 1;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                p = 0;
                break;
            }
        }
        if(p){
            printf("%d\n", i);
        }
    }
}