#include <stdio.h>

// constantes
#define TAM 10
#define MAX 30

// definicao de tipos
struct tLivro {
	char titulo[MAX], autor[MAX];
	int ano;
};

void leitura(tLivro vetor[TAM], int n); 

void listagem(tLivro vetor[TAM], int n, int P);

// funcao principal
int main() {
  int v[10], *p, *q, i, j;
  p = v;

  *p = 5;

  return 0;
}