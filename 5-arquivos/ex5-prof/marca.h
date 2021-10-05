#include <stdio.h>

struct tMarca
{
	int codigomarca;
	float nota;
};


void inserirM(tMarca *M, int &n, int cod, float nota);

float buscaMarca(tMarca *M, int n, int cod);

void removerMarca(tMarca *M, int &n, int cod);