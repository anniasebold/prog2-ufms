#include<stdio.h>

int piso_log2(int n) {
  int count = 0;

  if(n > 1) {
    n = n/2;
    count += 1;
    count += piso_log2(n);
  }

  return count;
}

int main() {
  int n;

  scanf("%d", &n);

  printf("%d\n", piso_log2(n));
  return 0;
}