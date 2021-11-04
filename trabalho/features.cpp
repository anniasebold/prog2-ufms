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
  n++;
};

void ordenaAluno(Aluno aluno[], int n) {

}

void buscaAluno(Aluno aluno[], int n) {
  char busca[MAX];
  int count, i;
  printf("\nDigite o nome que deseja buscar: \n");
  scanf(" %[^\n]", busca);

  for(i = 0; i < n; i++) {
    if(strcasestr(aluno[i].nome, busca)) {
      printf("%-25s\t%7.1lf\t\t\t%10s", 
      aluno[i].nome, 
      aluno[i].mediaFinal,
      aluno[i].situacao);
      count++;
    }
  }
  printf("\nTotal de alunos encontrados: %d\n", count);
};

void calculaMediaFinal(Aluno aluno[], int n) {
  if(aluno[n].notaP1 < aluno[n].notaPO) {
    if (aluno[n].notaP1 < aluno[n].notaP2) {
      aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
    // if(aluno[n].notaP2 > aluno[n].notaPO) {
    //   aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    // }
  }
  if(aluno[n].notaP2 < aluno[n].notaPO) {
    if (aluno[n].notaP2 < aluno[n].notaP1) {
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
    }
    // if (aluno[n].notaP1 > aluno[n].notaPO){
    //   aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
    // }
  } 
  else {
    if(aluno[n].mediaFinal < 6) {
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