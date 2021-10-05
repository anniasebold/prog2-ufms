#include <stdio.h>

int main() {
  char opcao;
  int num1, num2;
  int resultado;

  do {
    printf("\n[1] Somar dois numeros");
    printf("\n[2] Subtrair dois numeros");
    printf("\n[3] Resto entre dois numeros");
    printf("\n[4] Sair");
    printf("\nDigite sua opcao: ");
    scanf(" %c", &opcao);

    if(opcao == '1') {
      scanf("%d %d", &num1, &num2);
      resultado = num1 + num2;
      printf("Soma: %d", resultado);
    } 
    else if(opcao == '2') {
      scanf("%d %d", &num1, &num2);
      resultado = num1 - num2;
      printf("Subtracao: %d", resultado);
    }
    else if(opcao == '3') {
      scanf("%d %d", &num1, &num2);
      resultado = num1 % num2;
      printf("Resto: %d", resultado);
    }

  } while(opcao != '4');

  printf("\n");
  return 0;
}