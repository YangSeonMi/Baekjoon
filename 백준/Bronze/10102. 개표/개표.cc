#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char arr[a];
    for(int i=0; i<a; i++){
        scanf("%s", arr);
    }

    int count_a=0, count_b=0;
    for(int i=0; i<a; i++){
        if(arr[i]=='A') count_a++;
        else if(arr[i]=='B') count_b++;
    }

    if(count_a==count_b) printf("Tie");
    else if(count_a>count_b) printf("A");
    else if(count_a<count_b) printf("B");
    return 0;
}