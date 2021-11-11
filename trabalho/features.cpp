#include "features.h"

// BASE
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
  printf("\nDigite o nome que deseja buscar: ");
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

void leArquivo(Aluno aluno[], int &n) {
  FILE *arq; 
  char nomeArq[MAX];
  int i, count;
  printf("Digite o nome do arquivo que deseja ler: \n");
  scanf(" %s", nomeArq);

  arq = fopen(nomeArq, "r");

  if(arq == NULL) {
    printf("Arquivo %s nao pode ser aberto.\n", nomeArq);
  } else {
    while(feof(arq) == 0) {
      fscanf(arq, "%[^0123456789\t] %d %lf %lf %lf %lf", 
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

  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      if(strcmp(aluno[i].situacao, "Aprovado") == 0) {
        fprintf(arq, "\r%-35s\t\t%9d\t\t\t%4.1lf",
        aluno[i].nome,
        aluno[i].RA,
        aluno[i].mediaFinal);
        count++;
      }
    }
    fprintf(arq, "\nTotal: %d", count);
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

  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      if(strcmp(aluno[i].situacao, "Reprovado") == 0) {
        fprintf(arq, "%-35s\t\t%9d\t\t\t%4.1lf",
        aluno[i].nome,
        aluno[i].RA,
        aluno[i].mediaFinal);
        count++;
      }
    }
    fprintf(arq, "\nTotal: %d", count);
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

  if(arq == NULL) {
    printf("Arquivo %s nao pode ser gerado.\n", nomeArq);
  } else {
    for(i = 0; i < n; i++) {
      fprintf(arq, "%s %d %.1lf %.1lf %.1lf %.1lf", 
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


// ADICIONAIS

void situacaoAluno(Aluno aluno[], int n) {

  // MEDIA
  if(aluno[n].notaP1 < aluno[n].notaPO) {
    if (aluno[n].notaP1 < aluno[n].notaP2) {
      aluno[n].mediaFinal = (0.35*aluno[n].notaPO) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
  }
  if(aluno[n].notaP2 < aluno[n].notaPO) {
    if (aluno[n].notaP2 < aluno[n].notaP1) {
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaPO) + (0.3*aluno[n].notaT);
    }
  } 
  else {
    if(aluno[n].mediaFinal < 6) {
      aluno[n].mediaFinal = (0.35*aluno[n].notaP1) + (0.35*aluno[n].notaP2) + (0.3*aluno[n].notaT);
    }
  }

  // SITUAÇÃO
  if(aluno[n].mediaFinal >= 6.0) {
    strcpy(aluno[n].situacao, "Aprovado");
  } else {
    strcpy(aluno[n].situacao, "Reprovado");
  }
}