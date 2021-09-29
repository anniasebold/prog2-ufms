#include<stdio.h>

int func(int n) {
  if(n == 1) {
    return n;
  } else {
    return (n - 1) * func(n - 1);
  }
}

int main() {

  printf("%d\n", func(4));
  printf("%d\n", func(5));
  return 0;
}

//func(1) = 1

//func( n ) = (n - 1) * func(n - 1)