#include <stdio.h>
#include <string.h>

int main(){
  char n[101], m[101];
  scanf("%s %s", n, m);
  int len = strlen(n);
  char r_n[101], r_m[101];

  for (int i=0; i<len; i++) {
    r_n[i] = n[len-1-i];
    r_m[i] = m[len-1-i];
  }
  r_n[len] = '\0';
  r_m[len] = '\0';

  if (strcmp(r_n, r_m)>0) {
    printf("%s\n", r_n);
  }
  else {
    printf("%s\n", r_m);
  }
}