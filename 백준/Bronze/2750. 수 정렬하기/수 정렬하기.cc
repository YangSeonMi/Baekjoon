#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[1000]; 

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
