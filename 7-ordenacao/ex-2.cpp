#include <stdio.h>
#include <stdlib.h>

void leNumero(int *v, int n);
void imprimeNumero(int *v, int n);
void quicksort(int p, int r, int *v);
int separa(int p, int r, int *v);
void troca(int &indice, int &menor);

void leNumero(int *v, int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
}

void imprimeNumero(int *v, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

void quicksort(int p, int r, int *v) {
  int q;

  if (p < r) {
    q = separa(p, r, v);
    quicksort(p, q, v);
    quicksort(q + 1, r, v);
  }
}

int separa(int p, int r, int *v) {
  int x, i, j;

  x = v[p];
  i = p-1;
  j = r+1;

  while(1) {
    do {
      j--;
    } while (v[j] < x);

    do {
      i++;
    } while (v[i] > x);

    if (i < j)
      troca(v[i], v[j]);
    else
      return j;
  }
}

void troca(int &indice, int &menor) {
  int aux;

  aux = indice;
  indice = menor;
  menor = aux;
}

int main() {
  int n;
  scanf("%d", &n);
  int numeros[n];

  leNumero(numeros, n);
  quicksort(0, n-1, numeros);
  imprimeNumero(numeros, n);
}