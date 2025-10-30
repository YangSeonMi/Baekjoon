#include <stdio.h>
#include <string.h>

int main() {
    char arr[10];

    scanf("%s", arr); 

    if (strcmp(arr, "NLCS") == 0)
        printf("North London Collegiate School");
    else if (strcmp(arr, "BHA") == 0)
        printf("Branksome Hall Asia");
    else if (strcmp(arr, "KIS") == 0)
        printf("Korea International School");
    else if (strcmp(arr, "SJA") == 0)
        printf("St. Johnsbury Academy");
    else
        printf("Unknown school");

    return 0;
}