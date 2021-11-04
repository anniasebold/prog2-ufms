#include "features.h"

void cadastraAluno(Aluno aluno[], int &n) {
  printf("Total de alunos: %d\n", n);
  printf("\nCadastro de Aluno");
  printf("\nInforme Nome, RA, Notas: P1, P2, Trabalho e PO");
  printf("\nCaso a PO não tenha sido realizada preencha com 0\n");
  scanf("%[^0123456789\t] %d %lf %lf %lf %lf", 
  aluno[n].nome, 
  &aluno[n].RA, 
  &aluno[n].notaP1, 
  &aluno[n].notaP2, 
  &aluno[n].notaT, 
  &aluno[n].notaPO);

  situacaoAluno(aluno, n);
  printf("Aluno cadastrado!\n");
  wait();
  // system("clear");
  n++;
};

void ordenaAluno(Aluno aluno[], int n) {

}

void buscaAluno(Aluno aluno[], int n) {
  char busca[MAX];
  // printf("Digite o nome que deseja buscar: ");
  // scanf(" %s", busca);
  // printf("%s", busca);
  ordenaAluno(aluno, n);
  int i;
  for(i = 0; i < n; i++) {
    printf("%-25s\t%7.1lf\t\t\t%10s", 
    aluno[i].nome, 
    aluno[i].mediaFinal,
    aluno[i].situacao);
  }
};

void calculaMediaFinal(Aluno aluno[], int n) {
  if(aluno[n].notaP1 < aluno[n].notaPO) {
    printf("Entrou caso 1\n");
    if (aluno[n].notaP1 < aluno[n].notaP2) {
      printf("Entrou caso 1.1\n");
      aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
    if(aluno[n].notaP2 > aluno[n].notaPO) {
      printf("Entrou caso 1.2\n");
      aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
  }
  if(aluno[n].notaP2 < aluno[n].notaPO) {
    printf("Entrou caso 2\n");
    if (aluno[n].notaP2 < aluno[n].notaP1) {
      printf("Entrou caso 2.1\n");
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
    }
    if (aluno[n].notaP1 > aluno[n].notaPO){
      printf("Entrou caso 2.2\n");
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
    }
  } 
  else {
    printf("Entrou caso 3\n");
    if(aluno[n].mediaFinal < 6) {
      printf("Entrou caso 3.1\n");
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
  }
};

void situacaoAluno(Aluno aluno[], int n) {
  calculaMediaFinal(aluno, n);
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