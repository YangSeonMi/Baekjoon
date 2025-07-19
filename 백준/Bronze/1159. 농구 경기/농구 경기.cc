#include <stdio.h>

int main() {
    int n, same=1;
    scanf("%d", &n);
    
    char player[n][100];
    int count[26] = {0};
    for (int i=0; i<n; i++){
        scanf("%s", player[i]);
        char f = player[i][0];
        if (f >='a' && f <= 'z'){
            count[f-'a']++;
        }
    }

    int found=0;
    for(int i=0; i<26; i++){
        if(count[i]>=5){
            printf("%c", i+'a');
            found=1;
        }
    }
    if(!found){
        printf("PREDAJA");
    }
    printf("\n");
    return 0;
}