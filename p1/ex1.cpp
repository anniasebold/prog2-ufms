#include <stdio.h>

int main() {

  int x, y, *p; //1
  printf("x = %d, y = %d\n", x, y);
  y = 0; //2
  printf("x = %d, y = %d\n", x, y);
  p = &y; //3
  printf("x = %d, y = %d\n", x, y);
  x = *p; //4
  printf("x = %d, y = %d\n", x, y);
  x = 4; //5 
  printf("x = %d, y = %d\n", x, y);
  (*p)++; //6
  printf("x = %d, y = %d\n", x, y);
  --x; //7
  printf("x = %d, y = %d\n", x, y);
  (*p) = (*p) + x;
  printf("x = %d, y = %d\n", x, y);
  printf("(x+y) = %d\n", x+y);

  return 0;
}