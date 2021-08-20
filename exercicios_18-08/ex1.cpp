#include<stdio.h>
#define MAX 50

// prototipo
void calcula_max_min(float notas[MAX], int n, int &ind_max, int &ind_min);

int main() {
	float notas[MAX];

	int n, i, ind_max, ind_min;

	printf("Digite a quantidade de notas: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%f", &notas[i]);
	}

  calcula_max_min(notas, n, ind_max, ind_min);

  //a 
  printf("Indice Maior valor: %d\n", ind_max);
  printf("Indice Menor valor: %d\n", ind_min);

  //b
  printf("Maior valor: %.1f\n", notas[ind_max]);
  printf("Menor valor: %.1f\n", notas[ind_min]);
  printf("Diferença: %.1f\n", notas[ind_max] - notas[ind_min]);

  return 0;

}

void calcula_max_min(float notas[MAX], int n, int &ind_max, int &ind_min) {
  int i;
  ind_max = 0, ind_min = 0;

  for(i = 0; i < n; i++) {
    if (notas[i] > notas[ind_max]) {
      ind_max = i;
    }
    else if (notas[i] < notas[ind_min]) {
      ind_min = i;
    }
  }
}
