#include "carro.h"

void inserirC(tCarro* C, int &n, char *mod, int ano, int codmarca)
{
	C[n].codigomarca = codmarca;
	C[n].ano = ano;
	strcpy(C[n].modelo, mod);
	n++;

	printf("Carro cadastrado com sucesso.\n");
}

void listagem(tMarca* M, int tamM, tCarro* C, int tamC)
{
	float nota;
	for(int i = 0; i < tamC; i++)
	{

		nota = buscaMarca(M, tamM, C[i].codigomarca);
		printf("%s %d %.1f\n", C[i].modelo, C[i].ano, nota);	

	}
}