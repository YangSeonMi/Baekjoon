#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = 0;
    int s=0;
    for(int i=0; i<n; i++){
        if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2]){
            s = 10000+arr[i][0]*1000;
            if(max<s) max = s;
            s = 0;
        }
        else if(arr[i][0]==arr[i][1] || arr[i][0]==arr[i][2] || arr[i][1]==arr[i][2]){
            if(arr[i][0]==arr[i][1]){
                s = 1000+arr[i][0]*100;
                if(max<s) max = s;
                s = 0;
            }
            else if(arr[i][0]==arr[i][2]){
                s = 1000+arr[i][0]*100;
                if(max<s) max = s;
                s = 0;
            }
            else if(arr[i][1]==arr[i][2]){
                s = 1000+arr[i][1]*100;
                if(max<s) max = s;
                s = 0;  
            }
        }
        else{
            if(arr[i][0]>arr[i][1] && arr[i][0]>arr[i][2]){
                s = arr[i][0]*100;
                if(max<s) max = s;
                s = 0;
            }
            else if(arr[i][1]>arr[i][0] && arr[i][1]>arr[i][2]){
                s = arr[i][1]*100;
                if(max<s) max = s;
                s = 0;
            }
            else{
                s = arr[i][2]*100;
                if(max<s) max = s;
                s = 0;
            }
        }
    }
    printf("%d", max);
    return 0;
}