#include <stdio.h>

void troca(int &atual, int &min) {
  int aux;

  aux = atual;
  atual = min;
  min = aux;
}

int main() {
  int n = 4;
  int i, j, min, v[] = {1, 20, 17, 11, 2};

  for(i = 0; i < n - 1; i++) {
    min = i;
    for(j = i+1; j < n; j++){
      if(v[j] < v[min])
        min = j;
    }
    troca(&v[i], &v[min]);
  }

  // for(i = 0; i < n; i++) {
  //   printf(" %d ", v[i]);
  // }
}