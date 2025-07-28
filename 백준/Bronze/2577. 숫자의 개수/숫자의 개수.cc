#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int r = a*b*c;

    int count[10] = {0};

    while(r>0){
        int d = r%10;
        count[d]++;
        r/=10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", count[i]);
    }
    return 0;
}