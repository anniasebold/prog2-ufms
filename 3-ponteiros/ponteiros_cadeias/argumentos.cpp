#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i;

  printf("Qtd de argumentos: %d\n", argc);
  printf("Os argumentos: \n");

  for(i=0; i < argc; i++){
    printf("argv[%d] = %s \n", i, argv[i]);
  }
  return 0;
}