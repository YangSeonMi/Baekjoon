#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}

int str_to_int(char* str) {
    int result = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

void int_to_str(int num, char* str) {
    int i = 0;
    if (num == 0) {
        str[i++] = '0';
    } else {
        while(num > 0) {
            str[i++] = (num % 10) + '0';
            num /= 10;
        }
    }
    str[i] = '\0';
    reverse(str); 
}

int main() {
    char x[1001], y[1001];
    scanf("%s %s", x, y);

    reverse(x);
    reverse(y);

    int a = str_to_int(x);
    int b = str_to_int(y);
    int sum = a + b;

    char result[1001];
    int_to_str(sum, result);
    reverse(result);

    printf("%d\n", str_to_int(result));

    return 0;
}
