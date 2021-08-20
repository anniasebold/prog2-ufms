#include<stdio.h> 

int main() { 
  int intNum;
  int umDigito;
  int doisDigito;
  int soma;

  scanf("%d", &intNum);
  umDigito = intNum % 10;
  intNum = intNum/10;
  doisDigito = intNum % 10; 
  soma = umDigito + doisDigito;

  printf("%d\n", soma);

  return 0;
}
