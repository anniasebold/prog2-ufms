#include <stdio.h>

#include "busca.h"

int main()
{
	int v[]={10,20,30,40,32};
	int x;

	scanf("%d", &x);

	printf("Posicao do %d: ", x);
	printf("%d\n", busca_sequencial(5, v, x));

	return 0;
}