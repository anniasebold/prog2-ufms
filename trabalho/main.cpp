#include <stdio.h>
#include <stdlib.h>

#define MAX 80

struct Aluno {
  char nome[MAX];
  int RA;
  double notaP1, notapP2, notaT, notaPO, mediaFinal;
};

int main() {
  int opcao;

  system("clear");
  do {
    printf("\nMenu de opções:");
    printf("\n[1] Cadastrar um novo aluno");
    printf("\n[2] Buscar aluno");
    printf("\n[3] Ler arquivo com listagem de alunos");
    printf("\n[4] Gerar arquivos com alunos APROVADOS");
    printf("\n[5] Gerar arquivos com alunos REPROVADOS");
    printf("\n[6] Fechar programa");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    system("clear");

    if(opcao == 1) {
      printf("Opcao 1");
    }
    else if(opcao == 2) {
      printf("Opcao 2");
    }
    else if(opcao == 3) {
      printf("Opcao 3");
    }
    else if(opcao == 4) {
      printf("Opcao 4");
    }
    else if(opcao == 5) {
      printf("Opcao 5");
    }
    else if(opcao == 6) {
      printf("Opcao 6\n");
    }

  } while(opcao != 6);

  return 0;
}