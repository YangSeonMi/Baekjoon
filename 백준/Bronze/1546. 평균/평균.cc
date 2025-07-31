#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double arr[n];
    double max = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (arr[i] > max) max = arr[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max * 100.0; 
        sum += arr[i];
    }

    printf("%.6f\n", sum / n); 

    return 0;
}
