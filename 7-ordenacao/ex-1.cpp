#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

struct Aluno {
  char nome[MAX];
  int exercicio;
};

void cadastraAluno(Aluno *aluno, int n);
void imprimeAluno(Aluno *aluno, int n);
void ordenaAluno(Aluno *aluno, int n);
void troca(Aluno &indice, Aluno &menor);

int main() {
  int n;
  scanf("%d", &n);
  Aluno aluno[n];

  cadastraAluno(aluno, n);
  ordenaAluno(aluno, n);
  imprimeAluno(aluno, n);
}

void cadastraAluno(Aluno *aluno, int n) {
  for (int i = 0; i < n; i++) {
    scanf("%s %d", aluno[i].nome, &aluno[i].exercicio);
  }
}

void imprimeAluno(Aluno *aluno, int n) {
  for (int j = 0; j < n; j++) {
    printf("%s ", aluno[j].nome);
  }
  printf("\n");
}

void ordenaAluno(Aluno *aluno, int n) {
  int men;

  for (int i = 0; i < n - 1; i++) {
    men = i;
    for (int j = i + 1; j < n; j++) {
      if (aluno[j].exercicio > aluno[men].exercicio) {
        men = j;
      }
      else if (aluno[j].exercicio == aluno[men].exercicio) {
        if (strcmp(aluno[j].nome, aluno[men].nome) < 0){
          men = i;
        }
      }
    }
    troca(aluno[i], aluno[men]);
  }
}

void troca(Aluno &indice, Aluno &menor) {
  Aluno aux;

  aux = indice;
  indice = menor;
  menor = aux;
}