#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int arr[T][2];

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for(int i = 0; i < T; i++) {
        int a = arr[i][0] % 10;
        int b = arr[i][1];

        if (a == 0) {
            printf("10\n");
            continue;
        }

        int result = 1;
        for (int j = 0; j < b; j++) {
            result = (result * a) % 10;
        }

        printf("%d\n", result);
    }

    return 0;
}
