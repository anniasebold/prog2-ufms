#include <stdio.h>
#include <string.h> /*strlen*/

int main() {

  char palavra[12] = "Annia Luiza";
  int n;

  n = 0;
  while (palavra[n] != '\0')
    n++;
  printf("O comprimento da palavra %d\n", n);
  printf("O comprimento da palavra é %d\n", strlen(palavra));

  return 0;
}