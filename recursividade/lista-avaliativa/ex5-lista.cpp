#include<stdio.h>

int potencia(int x, int n) {
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

  printf("%d\n", potencia(x, n));
  return 0;
}