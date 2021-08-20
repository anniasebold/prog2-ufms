#include<stdio.h>

int verifica_primo(int p);

int main() {

int n, numero;
int soma = 0;

  scanf("%d", &n);

  for(int i  = 1; i <= n; i++) {
    scanf("%d", &numero);
    if(verifica_primo(numero) == 1)
      soma += numero;
  }
  printf("Soma: %d", soma);
  return 0;

}

int verifica_primo(int p) {
  if (p % p == 0  and p % 1 == p){
    return 1;
  }
  else { 
    return 0;
  }
}