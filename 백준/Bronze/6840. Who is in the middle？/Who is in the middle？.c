#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b && a>c){
        if(b>c){
            printf("%d", b);
        }
        else if(b<c){
            printf("%d", c);
        }
    }
    else if(b>a && b>c){
        if(a>c){
            printf("%d", a);
        }
        else if(a<c){
            printf("%d", c);
        }
    }
    else if(c>a && c>b){
        if(a>b){
            printf("%d", a);
        }
        else if(a<b){
            printf("%d", b);
        }
    }
    return 0;
}