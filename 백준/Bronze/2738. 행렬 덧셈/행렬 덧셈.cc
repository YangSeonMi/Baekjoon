#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m], a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j] + a[i][j]);
        }
        printf("\n");
    }
    return 0;
}