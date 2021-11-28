#include <stdio.h>

#define MAX 100 

void selection(int n, int v[MAX]);
void troca(int &atual, int &min);

int main() {
  int n, i, v[MAX];

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  selection(n, v);
}

void selection(int n, int v[MAX]) {
  int i, j, min;

  for(i = 0; i < n - 1; i++) {
    min = i;
    for(j = i+1; j < n; j++){
      if(v[j] < v[min])
        min = j;
    }
    troca(v[i], v[min]);
  }

  for(i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

void troca(int &atual, int &min) {
  int aux;

  aux = atual;
  atual = min;
  min = aux;
}