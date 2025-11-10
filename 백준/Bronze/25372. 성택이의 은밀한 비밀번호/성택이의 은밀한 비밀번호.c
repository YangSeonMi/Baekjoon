#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[21];
    for(int i=0; i<n; i++){
        scanf("%s", str);
        int count=0;
        while(str[count]!='\0'){
            count++;
        }

        if(count>=6 && count<=9) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}