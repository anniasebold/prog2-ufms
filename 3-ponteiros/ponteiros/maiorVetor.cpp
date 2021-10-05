#include <stdio.h>
#define MAX 100



int* maximo(int n, int v[MAX]) {
	int i;
	int ind_maior = 0; // maior está na posicao 0

	for(i = 1; i < n; i++) {
		if(v[i] > v[ind_maior])
			ind_maior = i;
	}
	// maior está em v[ind_maior]
	return &v[ind_maior];
}


int main() {
	int n, i;
	int v[MAX];
	int *p;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &v[i]);

	p = maximo(n, v);

	printf("Maior: %d\n", *p);

	return 0;
}