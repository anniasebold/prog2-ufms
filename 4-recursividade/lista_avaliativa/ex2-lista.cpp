#include<stdio.h>

#define MAX 20

int conta(int n, int *W, int k);

int main() {
  int n, W[MAX], k, i;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &W[i]);
  }
  scanf("%d", &k);
  printf("%d\n", conta(n, W, k));

  return 0;
}

int conta(int n, int *W, int k) {
  int cont = 0, aux;

  if(n == 0){
    cont = cont;
  }
  else if(n == 1 && W[0] == k) {
    cont += 1;
  }
  else {
    aux = conta(n-1, W, k);
    if(W[n-1] == k) {
      cont += 1 + aux;
    } else {
      cont = aux;
    }
  }
  return cont;
}