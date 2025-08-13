#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int result=0;
    
    for(int i=1; i<n; i++){
        int sum=i;
        int t=i;
        
        while(t>0){
            sum += t%10;
            t/=10;
        }
        if(sum==n){
            result=i;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}