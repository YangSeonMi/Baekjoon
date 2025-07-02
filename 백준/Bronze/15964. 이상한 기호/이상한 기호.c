#include <stdio.h>

int name(int a, int b){
    int sum=0, m=0;
    sum = a +b;
    m = a-b;
    return sum*m;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d", name(A, B));
    return 0;
}