#include "features.h"

void cadastrarAluno(Aluno aluno[], int &n) {
  printf("\nCadastro de Aluno");
  printf("\nInforme Nome, RA, Nota P1, Nota P2, Nota Trabalho e Nota PO");
  printf("\nCaso a PO não tenha sido realizada preencha com 0 na NOTA PO\n");
  scanf("%[^0123456789\t] %d %lf %lf %lf %lf", 
  aluno[n].nome, 
  &aluno[n].RA, 
  &aluno[n].notaP1, 
  &aluno[n].notaP2, 
  &aluno[n].notaT, 
  &aluno[n].notaPO);

  situacaoAluno(aluno, n);
  printf("Aluno cadastrado!");
  system("clear");
  // wait();
  n++;
};

void buscarAluno(Aluno aluno[], int n) {
  printf("\nBusca de Aluno");
  int i;
  for(i = 0; i < n; i++) {
    printf("%s %.1lf %s", 
    aluno[i].nome, 
    aluno[i].mediaFinal,
    aluno[i].situacao);
  }
};

void calcularMediaFinal(Aluno aluno[], int n) {
  if(aluno[n].notaP1 < aluno[n].notaPO) {
    aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
  }
  else if(aluno[n].notaP2 < aluno[n].notaPO) {
    aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
  } 
  else {
    aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
  }
};

void situacaoAluno(Aluno aluno[], int n) {
  calcularMediaFinal(aluno, n);
  if(aluno[n].mediaFinal >= 6.0) {
    strcpy(aluno[n].situacao, "Aprovado");
  } else {
    strcpy(aluno[n].situacao, "Reprovado");
  }
};

void wait(){
    struct timespec tim, tim2;
    tim.tv_sec  = 1;
    tim.tv_nsec = 0;

    nanosleep(&tim, &tim2);
};