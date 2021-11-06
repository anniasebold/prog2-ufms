#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <ctype.h>

#define MAX 80
#define SIT 8

struct Aluno {
  char nome[MAX], situacao[SIT];
  int RA;
  double notaP1, notaP2, notaT, notaPO, mediaFinal;
};

void cadastraAluno(Aluno aluno[], int &n);
void ordenaAluno(Aluno aluno[], int n);
void leArquivo(Aluno aluno[], int &n);
void buscaAluno(Aluno aluno[], int n);
void geraArquivoAprovados(Aluno aluno[], int n);
void geraArquivoReprovados(Aluno aluno[], int n);
void geraArquivoCadastrados(Aluno aluno[], int n);

void calculaMediaFinal(Aluno aluno[], int n);
void situacaoAluno(Aluno aluno[], int n);