#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    scanf("%s", str);

    if (strcmp(str, "SONGDO") == 0) printf("HIGHSCHOOL");
    else if (strcmp(str, "CODE") == 0) printf("MASTER");
    else if (strcmp(str, "2023") == 0) printf("0611");
    else if (strcmp(str, "ALGORITHM") == 0) printf("CONTEST");

    return 0;
}
