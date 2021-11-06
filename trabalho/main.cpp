#include "features.h"

int main() {
  int opcao, n;
  Aluno aluno[MAX];

  system("clear");
  do {
    printf("Menu de opções:");
    printf("\n[1] Cadastrar um novo aluno");
    printf("\n[2] Buscar aluno pelo nome");
    printf("\n[3] Ler arquivo com listagem de alunos");
    printf("\n[4] Gerar arquivos com alunos APROVADOS");
    printf("\n[5] Gerar arquivos com alunos REPROVADOS");
    printf("\n[6] Fechar programa");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    system("clear");

    if(opcao == 1) {
      cadastraAluno(aluno, n);
    }
    else if(opcao == 2) {
      buscaAluno(aluno, n);
    }
    else if(opcao == 3) {
     leArquivo(aluno, n);
    }
    else if(opcao == 4) {
      for(int i = 0; i < n; i++) {
        printf("%-25s\t%7.1lf\t\t\t%10s", 
        aluno[i].nome, 
        aluno[i].mediaFinal,
        aluno[i].situacao);
      }
    }
    else if(opcao == 5) {
      printf("Opcao 5");
    }
    else if(opcao == 6) {
      printf("Opcao 6\n");
    }
    else {
      printf("Opção Inválida");
    }
    printf("\n");

  } while(opcao != 6);

  return 0;
}