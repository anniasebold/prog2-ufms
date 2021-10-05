#include <stdio.h>
#include<string.h>

// constantes
#define TAM 5
#define MAX 30

// definicao de tipos
struct tAluno {
	int nMatricula;
  char nome[MAX];
  char curso[MAX];
};

void leitura(tAluno aluno[TAM]);

void listagem(tAluno aluno[TAM]);

// funcao principal
int main() {
  tAluno aluno[MAX];

  leitura(aluno);
  listagem(aluno);

  return 0;
}

void leitura(tAluno aluno[MAX]){
  int i;
  for (i = 0; i < TAM; i++) {
    scanf(" %d", &aluno[i].nMatricula);
    scanf(" %[^\n]", aluno[i].nome);
    scanf(" %[^\n]", aluno[i].curso);
  }
}

void listagem(tAluno aluno[MAX]) {
  int i;
  char nomeCurso[MAX];
  scanf(" %[^\n]", nomeCurso);
  for (i = 0; i < TAM; i++) {
    if((strcmp(nomeCurso, aluno[i].curso)) == 0) {
      printf("%d ", aluno[i].nMatricula);
      printf("%s\n", aluno[i].nome);
    }
  }
}