#include <stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

    int nn=n;
    int mm=m;
    while (nn!=mm) {
        if (nn<mm) {
            nn+=n;
        }
        else {
            mm+=m;
        }
    }

    while(m!=0){
     int t = m;
     m = n%m;
     n = t;
    }
    printf("%d\n", n);
    printf("%d\n", nn);
}