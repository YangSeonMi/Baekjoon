#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n][2];
    for(int i=0; i<n; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    int q1=0, q2=0, q3=0, q4=0, axis=0;

    for(int i=0; i<n; i++){
        if(arr[i][0]==0 || arr[i][1]==0) axis++;
        else if(arr[i][0]>0){
            if(arr[i][1]>0){
                q1++;
            }
            else q4++;
        }
        else if(arr[i][0]<0){
            if(arr[i][1]>0){
                q2++;
            }
            else q3++;
        }
    }

    printf("Q1: %d\n", q1);
    printf("Q2: %d\n", q2);
    printf("Q3: %d\n", q3);
    printf("Q4: %d\n", q4);
    printf("AXIS: %d\n", axis);
    return 0;
}