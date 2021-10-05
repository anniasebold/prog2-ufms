#include<stdio.h>

int potencia(int x, int n) {
  int num = 0;

  if(n == 0) {
    num += 1;
  }
  else if(n%2 == 0) {
    num += potencia(x, n/2) * potencia(x, n/2);
  } else {
    num += x * potencia(x, n-1);
  }
  return num;
}

int main() {
  int x, n;

  scanf("%d %d", &x, &n);

  printf("%d\n", potencia(x, n));
  return 0;
}