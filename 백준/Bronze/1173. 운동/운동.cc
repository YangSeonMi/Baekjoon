#include <stdio.h>

int main() {
    int N, m, M, T, R, x;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

    int time=0;
    int bmp=m;
    int esercisde=0;

    if (m+T>M){
        printf("-1\n");
        return 0;
    }
    
    while(esercisde<N){
        time++;
        if (bmp+T<=M){
            bmp += T;
            esercisde++;
        }
        else{
            bmp -= R;
            if(bmp<m){
                bmp =m;
            }
        }
    }
    printf("%d\n", time);
    return 0;
}