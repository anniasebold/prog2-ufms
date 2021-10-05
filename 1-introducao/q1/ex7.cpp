#include<stdio.h>

int main() {

int numero,
  digito,
  temp,
  quant;

  quant = 0;
  temp = 0;


  scanf("%d %d", &numero, &digito);

  while(numero > 0 ) {
    temp = numero % 10;
    if (temp == digito) {
      quant += 1;
    }
    numero = numero / 10;
  }

  printf("%d\n", quant);
  return 0;

}