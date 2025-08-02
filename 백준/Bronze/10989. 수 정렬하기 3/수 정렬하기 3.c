#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count[10001] = {0}; 

    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        count[temp]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            printf("%d\n", i);
        }
    }

    return 0;
}
