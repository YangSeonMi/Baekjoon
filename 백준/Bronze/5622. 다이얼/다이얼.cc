#include <stdio.h>

int main() {
    char arr[15];
    scanf("%s", arr);
    
    int len=0;
    while(arr[len]!='\0') len++;
    
    int s=0;
    for(int i=0; i<len; i++){
        if(arr[i]=='A'||arr[i]=='B'||arr[i]=='C') s+=3;
        else if(arr[i]=='D'||arr[i]=='E'||arr[i]=='F') s+=4;
        else if(arr[i]=='G'||arr[i]=='H'||arr[i]=='I') s+= 5;
        else if(arr[i]=='J'||arr[i]=='K'||arr[i]=='L') s+= 6;
        else if(arr[i]=='M'||arr[i]=='N'||arr[i]=='O') s+= 7;
        else if(arr[i]=='P'||arr[i]=='Q'||arr[i]=='R'||arr[i]=='S') s+= 8;
        else if(arr[i]=='T'||arr[i]=='U'||arr[i]=='V') s+= 9;
        else if(arr[i]=='W'||arr[i]=='X'||arr[i]=='Y'||arr[i]=='Z') s+= 10;
    }
    printf("%d", s);
    return 0;
}