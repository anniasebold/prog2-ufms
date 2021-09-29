#include<stdio.h>

int mdc(int a, int b) {
  float r = a % b;

  if(r == 0) {
    return b;
  } else {
    return mdc(b, r);
  }

}

int main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("%d\n", mdc(a, b));
  return 0;
}