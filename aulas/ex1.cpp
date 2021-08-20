#include <stdio.h>

int main(void) {
  char sexo;
  float h, peso;
  float resultado;

  printf("Homem ou mulher? ");
  scanf(" %c", &sexo);

  printf("Digite seu peso: ");
  scanf(" %f", &peso);
  printf("Digite sua altura: ");
  scanf(" %f", &h);

  if(sexo == 'M') {
    resultado = (62.1 * h) - 44.7;
    printf("Seu peso ideal: %.1f", resultado);
  }
  else if(sexo == 'H') {
    resultado = (72.7 * h) - 58;
    printf("Seu peso ideal: %.1f", resultado);
  }
  
  printf("\n");
  return 0;
}