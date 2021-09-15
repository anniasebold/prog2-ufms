/*Faca um programa que leia um vetor com os dados de N (N <= 10)livros: 
titulo (maximo de 30 letras), autor (maximo de 30 letras) e ano. Leia um valor P e 
mostre as informacoes de todos os livros com ano abaixo de P. Repita esta consulta
ate que seja lido um valor P = 0 seja informado. 

- Crie uma funcao para fazer a leitura dos N livros, armazenando-os em um vetor de 
registros. A funcao deve receber como parametro o valor de N e o vetor para armazenar
os dados.

- Crie uma funcao para fazer a listagem dos livros com ano menor que P.*/

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
  tLivro livros[TAM];
  int n, p;

  printf("\nDigite a quantidade de livros: ");
  scanf("%d", &n);
  leitura(livros, n);

  do {
    printf("\nDigite o ano: ");
    scanf("%d", &p);
    listagem(livros, n, p);
  } while(p != 0);

  return 0;
}

void leitura(tLivro vetor[TAM], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Título: ");
    scanf(" %[^\n]", vetor[i].titulo);
    printf("Autor: ");
    scanf(" %[^\n]", vetor[i].autor);
    printf("Ano: ");
    scanf(" %d", &vetor[i].ano);
  }
}

void listagem(tLivro vetor[TAM], int n, int P) {
  int i;
  for (i = 0; i < n; i++) {
    if (vetor[i].ano < P){
      printf("Livros com o ano menor que o informado:\n");
      printf("Título: %s\n", vetor[i].titulo);
      printf("Autor: %s\n", vetor[i].autor);
      printf("Ano: %d\n", vetor[i].ano);
    }
  }
}
