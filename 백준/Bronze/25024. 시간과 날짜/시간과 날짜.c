#include <stdio.h>

int main() {
    int cntCase;
    scanf("%d", &cntCase);

    for (int c = 0; c < cntCase; c++) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x >= 0 && x <= 23 && y >= 0 && y <= 59)
            printf("Yes ");
        else
            printf("No ");

        if (x >= 1 && x <= 12) {
            if ((x == 2 && y >= 1 && y <= 29) ||
                ((x == 4 || x == 6 || x == 9 || x == 11) && y >= 1 && y <= 30) ||
                ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && y >= 1 && y <= 31))
                printf("Yes\n");
            else
                printf("No\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}