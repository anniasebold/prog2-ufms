#include <stdio.h>

#define MAX 40

struct tipoAluno
{
	int mat;
	char nome[MAX+1];
	float n1, n2, media;
};


void leitura(int , tipoAluno *);

void impressao(int , tipoAluno *);

