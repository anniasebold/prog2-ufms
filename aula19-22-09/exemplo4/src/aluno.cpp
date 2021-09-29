
#include "../include/aluno.h"


void leitura(int n, tipoAluno *vetor)
{
	for(int i = 0; i < n; i++)
	{
		printf("Matricula: ");
		scanf("%d", &vetor[i].mat);
		printf("Nome: ");
		scanf(" %[^\n]", vetor[i].nome);
		printf("Duas notas: ");
		scanf("%f %f", &vetor[i].n1, &vetor[i].n2);

		// calculo da media do aluno
		vetor[i].media = (vetor[i].n1 + vetor[i].n2)/2;	
	}
}


void impressao(int n, tipoAluno *vetor)
{
	for(int i = 0; i < n; i++)
		printf("%d %s %.1f\n", vetor[i].mat, vetor[i].nome, vetor[i].media);
}