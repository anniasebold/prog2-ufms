#include<stdio.h>

int main() {
  int inicio = 0, fim = 0, soma = 0;

  scanf("%d %d", &inicio, &fim);

  for(inicio = inicio; inicio <= fim; inicio++) {
    if (inicio % 2 != 0) {
      soma += inicio;
    }
  }

  printf("%d\n", soma);

  return 0;

}