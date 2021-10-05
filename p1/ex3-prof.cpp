#include <stdio.h>
#define MAX 20
#define TAM 100

struct tipoA{
	char nome[MAX+1];
	int op1, op2;
};


void maisEscolhida(int n, tipoA *alunos, int &maior);
int buscaIguais(int n, tipoA *v);

int main()
{
	int n;
	tipoA alunos[TAM];
	int maior;
	int indice;

	// leitura de n
	scanf("%d", &n);
	// leitura do vetor
	for(int i = 0; i < n; i++)
	{
		scanf("%s %d %d", alunos[i].nome, &alunos[i].op1, &alunos[i].op2);
	}

	// chamada da funcao para calcular a mais escolhida
	maisEscolhida(n, alunos, maior);
	printf("%d\n", maior);

	// chamada da funcao para verificar aluno que informou as 2 optativas iguais
	indice = buscaIguais(n, alunos);
	if(indice == -1)
	{
		printf("Inexistente\n");
	}
	else printf("%s\n", alunos[indice].nome);

	return 0;
}


// funcao
void maisEscolhida(int n, tipoA *alunos, int &maior)
{
	int i;
	int aux;
	int contador[5]={0,0,0,0,0};

	for( i = 0; i < n; i++)
	{
		aux = alunos[i].op1;
		contador[aux]++;
		aux = alunos[i].op2;
		contador[aux]++;
	}
	// achando o maior e menor do vetor contador
	maior = contador[1];
	for(i = 2; i < 5; i++)
	{
		if(contador[i] > maior)
			maior = contador[i];
	}
}


int buscaIguais(int n, tipoA *v)
{
	for(int i = 0; i < n; i++)
		if(v[i].op1 == v[i].op2)
			return i;

	return -1;
}
