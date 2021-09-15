#include <stdio.h>

int main(void) {
  char sexo;
  int num_pessoas;
  float h, peso;
  float resultado;

  printf("Digite a quantidade de pessoas: " );
  scanf("%i", &num_pessoas);

  for(num_pessoas; num_pessoas > 0; num_pessoas--) {
    printf("\nHomem ou mulher? ");
    scanf(" %c", &sexo);

    printf("Digite seu peso: ");
    scanf(" %f", &peso);
    printf("Digite sua altura: ");
    scanf(" %f", &h);

    if(sexo == 'M') {
      resultado = (62.1 * h) - 44.7;
    }
    else if(sexo == 'H') {
      resultado = (72.7 * h) - 58;
    }
    printf("Seu peso ideal: %.1f", resultado);
  
  }
  printf("\n");
  return 0;
}