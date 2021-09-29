#include <stdio.h>

#include "include/busca.h"

int main()
{
	int v[]={10,20,30,40,32};
	int n;

	scanf("%d", &n);

	printf("Posicao do %d: ", n);
	printf("%d\n", busca_sequencial(5,v,n));

	return 0;
}