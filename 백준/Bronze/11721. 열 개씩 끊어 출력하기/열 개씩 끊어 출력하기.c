#include <stdio.h>

int main() {
    char arr[101]={0,};
    scanf("%s", arr);

    int len=0; 
    while(arr[len]!='\0') len++;
    
    for(int i=0; i<len; i++){
        printf("%c", arr[i]);
        if(i%10==9) printf("\n");
    }
    return 0;
}