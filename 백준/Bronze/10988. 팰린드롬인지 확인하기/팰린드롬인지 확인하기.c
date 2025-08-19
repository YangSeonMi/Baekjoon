#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);
    
    int len=0;
    while(s[len]!='\0') len++;
    
    for(int i = 0; i <= len / 2; i++) {
    if(s[i] != s[len - i - 1]) {
      printf("0");
      return 0;
        }
    }
    printf("1");
    
    return 0;
}