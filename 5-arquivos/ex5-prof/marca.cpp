#include "marca.h"

void inserirM(tMarca *M, int &n, int cod, float nota)
{
	M[n].codigomarca = cod;
	M[n].nota = nota;
	n++;

	printf("Cadastro de marca realizado com sucesso\n");

}

float buscaMarca(tMarca *M, int n, int cod)
{
	for(int i = 0; i < n; i++)
	{
		if(M[i].codigomarca == cod)
			return M[i].nota;
	}	

	return 0.0;
}


void removerMarca(tMarca *M, int &n, int cod)
{

}