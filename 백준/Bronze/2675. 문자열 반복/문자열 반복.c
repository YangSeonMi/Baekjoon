#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int r[100];
    char arr[100][1001];
    for(int i=0; i<n; i++){
        scanf("%d %s", &r[i], arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<strlen(arr[i]); j++){
            for(int k=0; k<r[i]; k++){
                printf("%c", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}