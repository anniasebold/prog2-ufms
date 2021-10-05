#include<stdio.h>

int ciclo(int n) {
  int count = 0;

  printf("%d ", n);
  if(n > 1) {
    if(n%2 == 0) {
      n = n/2;
    }
    else {
      n = n*3+1;
    };
    count += ciclo(n);
  }

  count += 1;
  return count;
}

int main() {
  int n;

  scanf("%d", &n);

  printf("%d\n", ciclo(n));
  return 0;
}