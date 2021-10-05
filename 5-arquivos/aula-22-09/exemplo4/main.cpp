/*Escreva um programa que cadastre o nome, a matrícula e duas notas de N alunos
(N≤50). Em seguida, imprima a matrícula, o nome e a média de cada um deles.

*/

#include<stdio.h>
#include "include/aluno.h"
#define TAM 50


int main()
{
	tipoAluno vetor[TAM];	// vetor de alunos
	int n;     // qtde de alunos
	int i;

	// leitura de n e das informacoes do aluno
	scanf("%d", &n);
	
	leitura(n, vetor);
	impressao(n, vetor);

	printf("\n");
	return 0;
}