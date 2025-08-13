#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b;
    int s;

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);

        s = a*b;

        while(a!=b){
            if(a>b){
                a-=b;
            }
            else{
                b-=a;
            }
        }

        s = s/a;
        printf("%d\n", s);
    }
    return 0;
}
