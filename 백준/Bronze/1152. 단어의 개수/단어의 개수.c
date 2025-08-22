#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000001];
    scanf("%[^\n]", arr);       
    int len = strlen(arr);
    int count=0;

    for(int i=0; i<len; i++){
        if (arr[i] == ' ') {
            count++;
        }
    }
    if(arr[0]==' '){
        if(arr[len-1]==' '){
            printf("%d", count-1);
        }
        else printf("%d", count);
    }
    else if (arr[len - 1] == ' ') {
        printf("%d", count);
    } else {
        printf("%d", count + 1);
    }
    return 0;
}