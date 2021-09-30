#include <stdio.h>

//m = 1
//n = 2
int A(int m, int n) {
  int count = 0;

  if (m == 0) {
    return n + 1;
  }
  else if (n == 0) {
    printf("%d\n", count);
    return A(m - 1, 1);
  }
  else {
    printf("%d\n", count);
    return A(m - 1, A(m, n - 1));
  }
}

int main() {
  int m = 1, n = 2;

  printf("%d\n", A(m, n));

  return 0;
}