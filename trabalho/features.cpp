#include "features.h"

void cadastraAluno(Aluno aluno[], int &n) {
  printf("Total de alunos: %d\n", n);
  printf("\nCadastro de Aluno");
  printf("\nInforme Nome, RA, Notas: P1, P2, Trabalho e PO");
  printf("\nCaso a PO não tenha sido realizada preencha com 0\n");
  scanf(" %[^0123456789\t] %d %lf %lf %lf %lf", 
  aluno[n].nome, 
  &aluno[n].RA, 
  &aluno[n].notaP1, 
  &aluno[n].notaP2, 
  &aluno[n].notaT, 
  &aluno[n].notaPO);

  situacaoAluno(aluno, n);
  ordenacaoSelecaoAluno(aluno, n);
  printf("Aluno cadastrado!\n");
  n++;
};

void ordenacaoSelecaoAluno(Aluno aluno[], int n) {
  int i, j, men;

  for(i = 0; i < n-1; i++) {
    men = i;
    for(j = i+1; j < n; j++) {
      if(strcmp(
        aluno[j].nome,
        aluno[men].nome) < 0) {
        men = j;
      }
      else if(strcmp(
        aluno[j].nome,
        aluno[men].nome) == 0) {
          if (aluno[j].RA < aluno[men].RA) {
            men = j;
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

void buscaAlunos(Aluno aluno[], int n) {
  char busca[MAX];
  int count, i;
  printf("\nDigite o nome que deseja buscar: ");
  scanf(" %[^\n]", busca);
  printf("\n");

  ordenacaoSelecaoAluno(aluno, n);
  for(i = 0; i < n; i++) {
    if(strcasestr(aluno[i].nome, busca)) {
      printf("%-25s\t%7.1lf\t\t\t%10s\t\n", 
      aluno[i].nome, 
      aluno[i].mediaFinal,
      aluno[i].situacao);
      count++;
    }
  }
  printf("\nTotal de alunos encontrados: %d\n", count);
};

void leArquivo(Aluno aluno[], int &n) {
  FILE *arq; 
  char nomeArq[MAX];
  int i, count;
  printf("Digite o nome do arquivo que deseja ler: \n");
  scanf(" %s", nomeArq);

  arq = fopen(nomeArq, "r");

  if(arq == NULL) {
    printf("\nArquivo %s nao pode ser aberto.\n", nomeArq);
  } else {
    while(feof(arq) == 0) {
      fscanf(arq, "%[^0123456789\t] %d %lf %lf %lf %lf\n", 
      aluno[n].nome, 
      &aluno[n].RA, 
      &aluno[n].notaP1, 
      &aluno[n].notaP2, 
      &aluno[n].notaT, 
      &aluno[n].notaPO);

      situacaoAluno(aluno, n);
      n++;
      count++;
    }
    ordenacaoSelecaoAluno(aluno, n);
    fclose(arq);
    printf("Alunos lidos: %d\n", count);
  }
}

void geraArquivoAprovados(Aluno aluno[], int n) {
  FILE *arq; 
  int i, count;
  char nomeArq[MAX];
  strcpy(nomeArq, "aprovados.txt");

  arq = fopen(nomeArq, "w");

  ordenacaoSelecaoAluno(aluno, n);
  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      if(strcmp(aluno[i].situacao, "Aprovado") == 0) {
        fprintf(arq, "%-35s\t\t%9d\t\t\t%4.1lf\n",
        aluno[i].nome,
        aluno[i].RA,
        aluno[i].mediaFinal);
        count++;
      }
    }
    fprintf(arq, "Total: %d", count);
    printf("Arquivo '%s' gerado com sucesso.\n", nomeArq);
    fclose(arq);
  }
}

void geraArquivoReprovados(Aluno aluno[], int n) {
  FILE *arq; 
  int i, count;
  char nomeArq[MAX];
  strcpy(nomeArq, "reprovados.txt");

  arq = fopen(nomeArq, "w");
  ordenacaoSelecaoAluno(aluno, n);

  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      if(strcmp(aluno[i].situacao, "Reprovado") == 0) {
        fprintf(arq, "%-35s\t\t%9d\t\t\t%4.1lf\n",
        aluno[i].nome,
        aluno[i].RA,
        aluno[i].mediaFinal);
        count++;
      }
    }
    fprintf(arq, "Total: %d", count);
    printf("Arquivo '%s' gerado com sucesso.\n", nomeArq);
    fclose(arq);
  }
}

void geraArquivoCadastrados(Aluno aluno[], int n) {
  FILE *arq; 
  int i;
  char nomeArq[MAX];
  strcpy(nomeArq, "atual.txt");

  arq = fopen(nomeArq, "w");
  ordenacaoSelecaoAluno(aluno, n);
  
  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      fprintf(arq, "%s%d %.1lf %.1lf %.1lf %.1lf\n", 
        aluno[i].nome, 
        aluno[i].RA, 
        aluno[i].notaP1, 
        aluno[i].notaP2, 
        aluno[i].notaT, 
        aluno[i].notaPO);
    }
    printf("Arquivo '%s' gerado com dados cadastrados.\n", nomeArq);
    printf("Fechando programa, volte sempre!\n");
    fclose(arq);
  }
}

void situacaoAluno(Aluno aluno[], int n) {

  // MEDIA
  if(aluno[n].notaP1 <= aluno[n].notaPO && aluno[n].notaP1 <= aluno[n].notaP2) {
    aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
  }
  else if(aluno[n].notaP2 < aluno[n].notaPO && aluno[n].notaP2 < aluno[n].notaP1) {
    aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
  } 
  else {
    aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
  }

  // SITUAÇÃO
  if(aluno[n].mediaFinal >= 6.0) {
    strcpy(aluno[n].situacao, "Aprovado");
  } else {
    strcpy(aluno[n].situacao, "Reprovado");
  }
}