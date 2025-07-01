#include <stdio.h>

int main() {
    char arr[1001], t;
    int l;
    scanf("%s", arr);
    scanf("%d", &l);
    for(int i=0; i<l; i++){
        if (i <= l){
            t = arr[i];
        }
    }
    printf("%c", t);
    return 0;
}