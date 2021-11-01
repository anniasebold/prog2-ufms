#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

#define MAX 80
#define SIT 8

struct Aluno {
  char nome[MAX], situacao[SIT];
  int RA;
  double notaP1, notaP2, notaT, notaPO, mediaFinal;
};

void cadastrarAluno(Aluno aluno[], int &n);
void buscarAluno(Aluno aluno[], int n);


void calcularMediaFinal(Aluno aluno[], int n);
void situacaoAluno(Aluno aluno[], int n);
void wait();