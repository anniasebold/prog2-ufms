#include<stdio.h>

int F1(int x) {
  if(x == 1) {
    return -x;
  } else {
    return -5 * F1(x-1) + x;
  }
}

int main() {

  printf("%d\n", F1(4));
  return 0;
}